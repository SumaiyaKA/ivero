using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;

public class dbScript : MonoBehaviour
{
    private string dbName = "URI=file: testDB.db";
    // Start is called before the first frame update
    void Start()
    {
        CreateDB();
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void CreateDB()
    {
        // connection.open();
        using (var connection = new SqliteConnection(dbName)){

            connection.Open();

            using (var command = connection.CreateCommand()){
                command.CommandText = "CREATE TABLE IF NOT EXISTS products ( id_	INTEGER NOT NULL UNIQUE, Name	TEXT NOT NULL, Desc	TEXT NOT NULL, PRIMARY KEY(id_) )";
                command.ExecuteNonQuery();
            }

            connection.Close();
        }

    }
}
