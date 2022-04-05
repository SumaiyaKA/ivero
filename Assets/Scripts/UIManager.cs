﻿// Author: Sumaiya Al Amri D17126680
// UIManager manges the scroll menu & ..
// the feature of making the centre element in the menu bigger

// Packages used
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UIManager : MonoBehaviour
{
    private GraphicRaycaster raycaster;
    public Transform selectionPoint;
    private PointerEventData pData;
    private EventSystem eventSystem; 
    public static UIManager instance;
    public static UIManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<UIManager>();
            }
            return instance;
        }
        
    }
    
    // Start is called before the first frame update
    void Start()
    {
        raycaster = GetComponent<GraphicRaycaster>();
        eventSystem = GetComponent<EventSystem>();
        pData = new PointerEventData(eventSystem);
        pData.position = selectionPoint.position;
        
    }

    // Update is called once per frame
    void Update()
    {
       
    }

    public bool OnEntered(GameObject button)
    {
        List<RaycastResult> results = new List<RaycastResult>();
        raycaster.Raycast(pData, results);

        foreach (RaycastResult result in results)
        {
            if(result.gameObject == button)
            {
                return true;
            }
        }
        return false;

    }
}
