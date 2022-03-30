using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sceneObjects : MonoBehaviour
{
    public GameObject Model;
    private bool isActive = false;

    public void toggleModel()
    {
        Debug.Log("Toggle mOdel Visibiltiy.");
        isActive = !isActive;   // swap current value
        Model.SetActive(isActive); // set active varable  model
    }
}
