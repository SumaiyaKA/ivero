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
