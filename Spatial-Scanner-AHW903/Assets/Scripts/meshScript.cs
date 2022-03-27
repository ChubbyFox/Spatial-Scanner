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
    #endregion

    #region Created Functions

    public class meshScript : MonoBehaviour
    {
        public void hideMesh()
        {
            // Get the first Mesh Observer available, generally we have only one registered
            var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();

            // Set to not visible
            observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;
        }

        public void showMesh()
        {
            var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
            // Set to visible
            observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
        }

        public void saveMesh()
        {
            Debug.Log("Save Mesh Button Pressed");
        }
    }
    #endregion
}
