using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.EventSystems;

public class InputManager : MonoBehaviour
{
    
    [SerializeField] private Camera arCamera;
    [SerializeField] private ARRaycastManager _raycastManager;
    [SerializeField] private GameObject crosshair; 
    private List<ARRaycastHit> _hits = new List<ARRaycastHit>();
    private Touch touch;
    private Pose pose; 

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        CrosshairCalculation();
        touch = Input.GetTouch(0);

        if(Input.touchCount < 0 || touch.phase != TouchPhase.Began) return;

        if(IsPointerOverUI(touch)) return;

        Instantiate(DataHandler.Instance.furniture, pose.position, pose.rotation);
        
    }

    bool IsPointerOverUI(Touch touch)
    {
        PointerEventData eventdata = new PointerEventData(EventSystem.current);
        eventdata.position = new Vector2(touch.position.x, touch.position.y);
        List <RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(eventdata, results);

        return results.Count > 0;

    }

    // Calculates where to put the crosshair:
    void CrosshairCalculation()
    {
        Vector3 origin = arCamera.ViewportToScreenPoint(new Vector3(0.5f, 0.5f, 0));

        Ray ray = arCamera.ScreenPointToRay(origin);
        if(_raycastManager.Raycast(ray,_hits))
        {
            pose = _hits[0].pose;
            crosshair.transform.position = pose.position;
            crosshair.transform.eulerAngles = new Vector3(90, 0, 0);
            
        }

    }
}
