// Author: Sumaiya Al Amri D17126680
// it checked if item is being selected + gives the user..
// the ability to rotate and move the object using TapGesture.

// Packages used
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.EventSystems;
using UnityEngine.XR.Interaction.Toolkit.AR;
using UnityEngine.XR.ARSubsystems;


public class InputManager : ARBaseGestureInteractable
{
    
    [SerializeField] private Camera arCam;
    [SerializeField] private ARRaycastManager _raycastManager;
    [SerializeField] private GameObject crosshair; 
    private List<ARRaycastHit> _hits = new List<ARRaycastHit>();
    private Touch touch;
    private Pose pose; 

    // Start is called before the first frame update
    protected override bool CanStartManipulationForGesture(TapGesture gesture)
    {
        if(gesture.targetObject == null)
        {
            return true;
        }
        return false;
    }
    protected override void OnEndManipulation(TapGesture gesture)
    {
        if(gesture.isCanceled)
        {
            return;
        }
        if(IsPointerOverUI(gesture) || gesture.targetObject != null)
        {
            return;

        }

        if(GestureTransformationUtility.Raycast(gesture.startPosition, _hits, TrackableType.PlaneWithinPolygon))
        {
            GameObject placeItem = Instantiate(DataHandler.Instance.GetObject(), pose.position, pose.rotation);
            var anchorItem = new GameObject("PlacementAnchor");
            anchorItem.transform.position = pose.position;
            anchorItem.transform.rotation = pose.rotation;
            placeItem.transform.parent = anchorItem.transform;

        }

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        SetCrosshair();
    }

    // Calculates where to put the crosshair:
    void SetCrosshair()
    {
        Vector3 origin = arCam.ViewportToScreenPoint(new Vector3(0.5f, 0.5f, 0));
        
        if(GestureTransformationUtility.Raycast(origin,_hits, TrackableType.PlaneWithinPolygon))
        {
            pose = _hits[0].pose;
            crosshair.transform.position = pose.position;
            // ensure the position of the object is staight (not rotated) angle of 90 on x
            crosshair.transform.eulerAngles = new Vector3(90, 0, 0);
            
        }
    }

    bool IsPointerOverUI(TapGesture touch)
    {
        PointerEventData event_data = new PointerEventData(EventSystem.current);
        event_data.position = new Vector2(touch.startPosition.x, touch.startPosition.y);
        List <RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(event_data, results);

        return results.Count > 0;

    }

}
