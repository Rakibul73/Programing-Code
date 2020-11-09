package com.company.relations;

import com.company.connection.DbAdapter;
import java.sql.SQLException;
import java.sql.Statement;

public class User
{
    private static DbAdapter dbAdapter;

    public User(DbAdapter adapter)
    {
        dbAdapter = adapter;
    }

    public void createUserTable()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlCreate = "CREATE TABLE USER_            " +
                    "(USER_ID       VARCHAR(50)     NOT NULL," +
                    "FIRST_NAME     VARCHAR(50)             ," +
                    "LAST_NAME      VARCHAR(50)             ," +
                    "PRIVILEGE      INT   CHECK (PRIVILEGE BETWEEN 1 AND 2)," +
                    "PASSWORD       VARCHAR(20)             ," +
                    "PRIMARY KEY(USER_ID));";
            statement.executeUpdate(sqlCreate);
            statement.close();
        }
        catch (Exception e) { e.printStackTrace(); }
    }

    public void dropUserTable()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlDelete = "DROP TABLE USER_;";
            statement.executeUpdate(sqlDelete);
            statement.close();
        }
        catch(Exception e) { e.printStackTrace(); }
    }

    public void deleteAll()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlDrop = "DELETE FROM USER_;";
            statement.executeUpdate(sqlDrop);
            statement.close();
        }
        catch(Exception e){ e.printStackTrace(); }
    }
}