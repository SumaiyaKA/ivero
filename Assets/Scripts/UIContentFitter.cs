// Author: Sumaiya Al Amri D17126680
// UIContentFitter resizes the content menu.. 
// to allow the user to scroll to the end of the menu.

// Packages used
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIContentFitter : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Fitting()
    {
        HorizontalLayoutGroup horizontal_layout = GetComponent<HorizontalLayoutGroup>();
        int child_count = transform.childCount - 1;
        float child_width = transform.GetChild(0).GetComponent<RectTransform>().rect.width;
        float width = horizontal_layout.spacing * child_count +
                      child_count * child_width+
                      horizontal_layout.padding.left +
                      child_width;

        Vector2 size = GetComponent<RectTransform>().sizeDelta;
        GetComponent<RectTransform>().sizeDelta = new Vector2(width+350, size.y+350);
    }
}