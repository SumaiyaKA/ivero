// Author: Sumaiya Al Amri D17126680
// ButtonManager responsable of the flow.. 
// of the scorlling to make it smoother &..
// set a listener on the choosen item to augment it.  

// Packages used
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class ButtonManager : MonoBehaviour
{
    private Button btn;
    [SerializeField] private RawImage buttonImage;
    private int _itemId;
    private Sprite _buttonTexture;

    public int ItemId
    {
        set
        {
            _itemId = value;
        }
    }

    public Sprite ButtonTexture
    {
        set
        {
            _buttonTexture = value;
            buttonImage.texture = _buttonTexture.texture;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        btn = GetComponent<Button>();
        btn.onClick.AddListener(ChooseObject);
    }

    // Update is called once per frame
    void Update()
    {
        if(UIManager.Instance.OnEntered(gameObject))
        {
            transform.DOScale(Vector3.one * 2, 0.3f);
        }
        else 
        {
            transform.DOScale(Vector3.one, 0.3f);
        }
        
    }

    // Pass object id to the datahandler
    void ChooseObject()
    {
        DataHandler.Instance.SetObject(_itemId);

    }
}
