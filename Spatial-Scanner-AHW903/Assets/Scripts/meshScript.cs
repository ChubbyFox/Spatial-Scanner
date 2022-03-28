// Copyright (c) Microsoft Corporation. All rights reserved.
namespace Microsoft.MixedReality.SceneUnderstanding.Samples.Unity
{
    using Microsoft.MixedReality.Toolkit;
    using Microsoft.MixedReality.Toolkit.SpatialAwareness;

    //System
    using System;
    using System.IO;
    using System.Text;
    using System.Collections;
    using System.Threading.Tasks;
    using System.Collections.Generic;
    using System.Runtime.InteropServices;

    //Unity
    using UnityEngine;
    using UnityEngine.Events;

#if WINDOWS_UWP
    using WindowsStorage = global::Windows.Storage;
#endif

    /// <summary>
    /// Different rendering modes available for scene objects.
    /// </summary>
    public enum RenderMode
    {
        Quad,
        QuadWithMask,
        Mesh,
        Wireframe
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct HolograhicFrameData
    {
        public uint VersionNumber;
        public uint MaxNumberOfCameras;
        public IntPtr ISpatialCoordinateSystemPtr; // Windows::Perception::Spatial::ISpatialCoordinateSystem
        public IntPtr IHolographicFramePtr; // Windows::Graphics::Holographic::IHolographicFrame
        public IntPtr IHolographicCameraPtr; // // Windows::Graphics::Holographic::IHolographicCamera
    }


    public class meshScript : MonoBehaviour
    {
        #region Public Variables

        [Tooltip("When enabled, the scene will be queried from a device (e.g Hololens). Otherwise, a previously saved, serialized scene will be loaded and served from your PC.")]
        public bool QuerySceneFromDevice = true;
        [Tooltip("The scene to load when not running on the device (e.g SU_Kitchen in Resources/SerializedScenesForPCPath).")]
        public List<TextAsset> SUSerializedScenePaths = new List<TextAsset>(0);

        [Header("Render Colors")]
        [Tooltip("Colors for the Scene Understanding Background objects")]
        public Color ColorForBackgroundObjects = new Color(0.953f, 0.475f, 0.875f, 1.0f);
        [Tooltip("Colors for the Scene Understanding Wall objects")]
        public Color ColorForWallObjects = new Color(0.953f, 0.494f, 0.475f, 1.0f);
        [Tooltip("Colors for the Scene Understanding Floor objects")]
        public Color ColorForFloorObjects = new Color(0.733f, 0.953f, 0.475f, 1.0f);
        [Tooltip("Colors for the Scene Understanding Ceiling objects")]
        public Color ColorForCeilingObjects = new Color(0.475f, 0.596f, 0.953f, 1.0f);
        [Tooltip("Colors for the Scene Understanding Platform objects")]
        public Color ColorForPlatformsObjects = new Color(0.204f, 0.792f, 0.714f, 1.0f);
        [Tooltip("Colors for the Scene Understanding Unknown objects")]
        public Color ColorForUnknownObjects = new Color(1.0f, 1.0f, 1.0f, 1.0f);
        [Tooltip("Colors for the Scene Understanding Inferred objects")]
        public Color ColorForInferredObjects = new Color(0.5f, 0.5f, 0.5f, 1.0f);
        [Tooltip("Colors for the World mesh")]
        public Color ColorForWorldObjects = new Color(0.0f, 1.0f, 1.0f, 1.0f);


        #endregion

        #region Private Variables

        private byte[] LatestSUSceneData = null;
        private readonly object SUDataLock = new object();

        #endregion

        #region Data Querying and Consumption

        // It is recommended to deserialize a scene from scene fragments
        // consider all scenes as made up of scene fragments, even if only one.
        private SceneFragment GetLatestSceneSerialization()
        {
            SceneFragment fragmentToReturn = null;

            lock (SUDataLock)
            {
                if (LatestSUSceneData != null)
                {
                    byte[] sceneBytes = null;
                    int sceneLength = LatestSUSceneData.Length;
                    sceneBytes = new byte[sceneLength];

                    Array.Copy(LatestSUSceneData, sceneBytes, sceneLength);

                    // Deserialize the scene into a Scene Fragment
                    fragmentToReturn = SceneFragment.Deserialize(sceneBytes);
                }
            }

            return fragmentToReturn;
        }
        #endregion

        #region Display Data into Unity
        /// <summary>
        /// Get the corresponding color for each SceneObject Kind
        /// </summary>
        /// <param name="kind">The Scene Understanding kind from which to query the color</param>
        private Color? GetColor(SceneObjectKind kind)
        {
            switch (kind)
            {
                case SceneUnderstanding.SceneObjectKind.Background:
                    return ColorForBackgroundObjects;
                case SceneUnderstanding.SceneObjectKind.Wall:
                    return ColorForWallObjects;
                case SceneUnderstanding.SceneObjectKind.Floor:
                    return ColorForFloorObjects;
                case SceneUnderstanding.SceneObjectKind.Ceiling:
                    return ColorForCeilingObjects;
                case SceneUnderstanding.SceneObjectKind.Platform:
                    return ColorForPlatformsObjects;
                case SceneUnderstanding.SceneObjectKind.Unknown:
                    return ColorForUnknownObjects;
                case SceneUnderstanding.SceneObjectKind.CompletelyInferred:
                    return ColorForInferredObjects;
                case SceneUnderstanding.SceneObjectKind.World:
                    return ColorForWorldObjects;
                default:
                    return null;
            }
        }

        #endregion

        #region Save To Disk Functions

        /// <summary>
        /// Get the latest bytes from a Scene Queried from device
        /// </summary>
        private byte[] GetLatestSceneBytes()
        {
            byte[] sceneBytes = null;
            lock (SUDataLock)
            {
                if (LatestSUSceneData != null)
                {
                    int sceneLength = LatestSUSceneData.Length;
                    sceneBytes = new byte[sceneLength];

                    Array.Copy(LatestSUSceneData, sceneBytes, sceneLength);
                }
            }

            return sceneBytes;
        }

        /// <summary>
        /// Save a serialized scene bytes to disk
        /// </summary>
        // Await is conditionally compiled out based on platform but needs to be awaitable
#pragma warning disable CS1998 // Async method lacks 'await' operators and will run synchronously
        public async Task SaveBytesToDiskAsync()
#pragma warning restore CS1998 // Async method lacks 'await' operators and will run synchronously
        {
            DateTime currentDate = DateTime.Now;
            int year = currentDate.Year;
            int month = currentDate.Month;
            int day = currentDate.Day;
            int hour = currentDate.Hour;
            int min = currentDate.Minute;
            int sec = currentDate.Second;

            if (QuerySceneFromDevice)
            {
                string fileName = string.Format("SU_{0}-{1}-{2}_{3}-{4}-{5}.bytes",
                                                year, month, day, hour, min, sec);

                byte[] OnDeviceBytes = GetLatestSceneBytes();

#if WINDOWS_UWP
                var folder = WindowsStorage.ApplicationData.Current.LocalFolder;
                var file = await folder.CreateFileAsync(fileName, WindowsStorage.CreationCollisionOption.GenerateUniqueName);
                await WindowsStorage.FileIO.WriteBytesAsync(file, OnDeviceBytes);
#else
                Debug.Log("Save on Device is only supported in Universal Windows Applications");
#endif
            }
            else
            {
                int fragmentNumber = 0;
                foreach (TextAsset serializedScene in SUSerializedScenePaths)
                {
                    byte[] fragmentBytes = serializedScene.bytes;

                    string fileName = string.Format("SU_Frag{0}-{1}-{2}-{3}_{4}-{5}-{6}.bytes",
                                                    fragmentNumber++, year, month, day, hour, min, sec);

                    string folder = Path.GetTempPath();
                    string file = Path.Combine(folder, fileName);
                    File.WriteAllBytes(file, fragmentBytes);
                    Debug.Log("SceneUnderstandingManager.SaveBytesToDisk: Scene Fragment saved at " + file);
                }
            }
        }

        /// <summary>
        /// Save the generated Unity Objects from Scene Understanding as Obj files
        /// to disk
        /// </summary>
        public async Task SaveObjsToDiskAsync()
        {
            DateTime currentDate = DateTime.Now;
            int year = currentDate.Year;
            int month = currentDate.Month;
            int day = currentDate.Day;
            int hour = currentDate.Hour;
            int min = currentDate.Minute;
            int sec = currentDate.Second;

            // List of all SceneObjectKind enum values.
            List<SceneUnderstanding.SceneObjectKind> sceneObjectKinds = new List<SceneObjectKind>();
            sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Background);
            sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Ceiling);
            sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.CompletelyInferred);
            sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Floor);
            sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Platform);
            sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Unknown);
            sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Wall);
            sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.World);

            List<Task> tasks = new List<Task>();
            SceneUnderstanding.Scene scene = null;
            if (QuerySceneFromDevice)
            {
                SceneFragment sceneFragment = GetLatestSceneSerialization();
                if (sceneFragment == null)
                {
                    Debug.LogWarning("SceneUnderstandingManager.SaveObjsToDisk: Nothing to save.");
                    return;
                }

                // Deserialize the scene.
                SceneFragment[] sceneFragmentsArray = new SceneFragment[1] { sceneFragment };
                scene = SceneUnderstanding.Scene.FromFragments(sceneFragmentsArray);
            }
            else
            {
                SceneFragment[] sceneFragments = new SceneFragment[SUSerializedScenePaths.Count];
                int index = 0;
                foreach (TextAsset serializedScene in SUSerializedScenePaths)
                {
                    if (serializedScene != null)
                    {
                        byte[] sceneData = serializedScene.bytes;
                        SceneFragment frag = SceneFragment.Deserialize(sceneData);
                        sceneFragments[index++] = frag;
                    }
                }

                // Deserialize the scene.
                scene = SceneUnderstanding.Scene.FromFragments(sceneFragments);
            }

            if (scene == null)
            {
                Debug.LogWarning("SceneUnderstandingManager.SaveObjsToDiskAsync: Scene is null");
                return;
            }

            foreach (SceneUnderstanding.SceneObjectKind soKind in sceneObjectKinds)
            {
                List<SceneUnderstanding.SceneObject> allObjectsOfAKind = new List<SceneObject>();
                foreach (SceneUnderstanding.SceneObject sceneObject in scene.SceneObjects)
                {
                    if (sceneObject.Kind == soKind)
                    {
                        allObjectsOfAKind.Add(sceneObject);
                    }
                }

                string fileName = string.Format("SU_{0}_{1}-{2}-{3}_{4}-{5}-{6}.obj",
                                                soKind.ToString(), year, month, day, hour, min, sec);

                if (allObjectsOfAKind.Count > 0)
                {
                    tasks.Add(SaveAllSceneObjectsOfAKindAsOneObj(allObjectsOfAKind, GetColor(soKind), fileName));
                }
            }
            await Task.WhenAll(tasks);
        }

        /// <summary>
        /// Save the generated Unity Objects from Scene Understanding as Obj files
        /// to disk (all objects of one kind as one obj file)
        /// </summary>
        private async Task SaveAllSceneObjectsOfAKindAsOneObj(List<SceneUnderstanding.SceneObject> sceneObjects, Color? color, string fileName)
        {
            if (sceneObjects == null)
            {
                return;
            }

            List<System.Numerics.Vector3> combinedMeshVertices = new List<System.Numerics.Vector3>();
            List<uint> combinedMeshIndices = new List<uint>();

            // Go through each scene object, retrieve its meshes and add them to the combined lists, defined above.
            foreach (SceneUnderstanding.SceneObject so in sceneObjects)
            {
                if (so == null)
                {
                    continue;
                }

                IEnumerable<SceneUnderstanding.SceneMesh> meshes = so.Meshes;
                if (meshes == null)
                {
                    continue;
                }

                foreach (SceneUnderstanding.SceneMesh mesh in meshes)
                {
                    // Get the mesh vertices.
                    var mvList = new System.Numerics.Vector3[mesh.VertexCount];
                    mesh.GetVertexPositions(mvList);

                    // Transform the vertices using the transformation matrix.
                    TransformVertices(so.GetLocationAsMatrix(), mvList);

                    // Store the current set of vertices in the combined list. As we add indices, we'll offset it by this value.
                    uint indexOffset = (uint)combinedMeshVertices.Count;

                    // Add the new set of mesh vertices to the existing set.
                    combinedMeshVertices.AddRange(mvList);

                    // Get the mesh indices.
                    uint[] mi = new uint[mesh.TriangleIndexCount];
                    mesh.GetTriangleIndices(mi);

                    // Add the new set of mesh indices to the existing set.
                    for (int i = 0; i < mi.Length; ++i)
                    {
                        combinedMeshIndices.Add((uint)(mi[i] + indexOffset));
                    }
                }
            }

            // Write as string to file.
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < combinedMeshVertices.Count; ++i)
            {
                sb.Append(string.Format("v {0} {1} {2} {3} {4} {5}\n", combinedMeshVertices[i].X, combinedMeshVertices[i].Y, combinedMeshVertices[i].Z, color.Value.r, color.Value.g, color.Value.b));
            }

            for (int i = 0; i < combinedMeshIndices.Count; i += 3)
            {
                // Indices start at index 1 (as opposed to 0) in objs.
                sb.Append(string.Format("f {0} {1} {2}\n", combinedMeshIndices[i] + 1, combinedMeshIndices[i + 1] + 1, combinedMeshIndices[i + 2] + 1));
            }

            await SaveStringToDiskAsync(sb.ToString(), fileName);
        }

        /// <summary>
        /// Save a string to disk
        /// this string is the obj file that represents the SU Geometry
        /// </summary>
// Await is conditionally compiled out based on platform but needs to be awaitable
#pragma warning disable CS1998 // Async method lacks 'await' operators and will run synchronously
        private async Task SaveStringToDiskAsync(string data, string fileName)
#pragma warning restore CS1998 // Async method lacks 'await' operators and will run synchronously
        {
            if (string.IsNullOrEmpty(data))
            {
                Debug.LogWarning("SceneUnderstandingManager.SaveStringToDiskAsync: Nothing to save.");
                return;
            }

            if (QuerySceneFromDevice)
            {
#if WINDOWS_UWP
                var folder = WindowsStorage.ApplicationData.Current.LocalFolder;
                var file = await folder.CreateFileAsync(fileName, WindowsStorage.CreationCollisionOption.GenerateUniqueName);
                await WindowsStorage.FileIO.AppendTextAsync(file, data);
#else
                Debug.Log("Save on Device is only supported in Universal Windows Applications");
#endif
            }
            else
            {
                string folder = Path.GetTempPath();
                string file = Path.Combine(folder, fileName);
                File.WriteAllText(file, data);
                Debug.Log("SceneUnderstandingManager.SaveStringToDiskAsync: Scene Objects saved at " + file);
            }
        }

        private void TransformVertices(System.Numerics.Matrix4x4 transformationMatrix, System.Numerics.Vector3[] vertices)
        {
            for (int i = 0; i < vertices.Length; ++i)
            {
                vertices[i] = System.Numerics.Vector3.Transform(vertices[i], transformationMatrix);
            }
        }

        #endregion

        #region Created Functions
 
        public void hideMesh()
        {
            var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();

            // Set to not visible
            observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;
            Debug.Log("Mesh set to Hidden.");
        }

        public void showMesh()
        {
            var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
            // Set to visible
            observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
            Debug.Log("Mesh Set to Visible.");
        }

        public void suspendMesh()
        {
            // Suspend Mesh Observation from all Observers
            CoreServices.SpatialAwarenessSystem.SuspendObservers();
            Debug.Log("Suspending mesh Observers.");
        }

        public void resumeMesh()
        {
            // Resume Mesh Observation from all Observers
            CoreServices.SpatialAwarenessSystem.ResumeObservers();
            Debug.Log("Resming Mesh Observers.");
        }

        public void saveMesh()
        {
            Debug.Log("Save Mesh Button Pressed");

        }
    }
    #endregion
}
