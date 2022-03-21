using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sceneObjects : MonoBehaviour
{
    public GameObject Model;
    private bool isActive = false;

    // Start is called before the first frame update
    void Start()
    {
        isActive = false;
        Model.SetActive(false); // hide objects when starts
    }

    public void toggleModel()
    {
        isActive = !isActive;   // swap current value
        Model.SetActive(isActive); // set active varable  model
    }
}
