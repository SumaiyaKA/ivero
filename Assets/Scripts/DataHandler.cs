// Author: Sumaiya Al Amri D17126680
// DataHandler gets the objects from Google Cloud 
// bucket and feed the scroll menu with the items in button format 
// The bucket link:
// https://console.cloud.google.com/storage/browser/ivero_bucket;tab=objects?forceOnBucketsSortingFiltering=false&project=iverodb&prefix=&forceOnObjectsSortingFiltering=false

// Packages used
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
public class DataHandler : MonoBehaviour
{
    private GameObject furniture;
    [SerializeField] private ButtonManager buttonPrefab;
    [SerializeField] private GameObject buttonContainer;
    [SerializeField] private List<Item> _items;
    [SerializeField] private String label;
    private int currentId = 0;
    private static DataHandler instance;
    public static DataHandler Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<DataHandler>();
            }
            return instance;
        }
        
    }

    private async void Start()
    {
        await Get(label);
        CreateItemsButtons();
    }

    public void SetObject(int id)
    {
        furniture = _items[id].itemPrefab;

    }

    public GameObject GetObject()
    {
        return furniture;
    }

     void CreateItemsButtons()
    {
        foreach (Item i in _items)
        {
            ButtonManager b = Instantiate(buttonPrefab, buttonContainer.transform);
            b.ItemId = currentId;
            b.ButtonTexture = i.itemImage;
            currentId++;

        }

    }

    // Uses addressables to get the items from Google Cloud.. 
    // bucket by the items label "Furniture"
    public async Task Get(String label)
    {
        var locations = await Addressables.LoadResourceLocationsAsync(label).Task;
        foreach (var location in locations)
        {
            var obj = await Addressables.LoadAssetAsync<Item>(location).Task;
            _items.Add(obj);
        }
    }
}
