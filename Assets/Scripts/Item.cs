// Author: Sumaiya Al Amri D17126680
// This is gives the developer the ability to create items in..
// Unity as a prefab with fields like price and image.

// Packages used
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "Item1", menuName = "AddItem/Item")]
public class Item : ScriptableObject 
{
    public float price;
    public GameObject itemPrefab;
    public Sprite itemImage;

   
}
