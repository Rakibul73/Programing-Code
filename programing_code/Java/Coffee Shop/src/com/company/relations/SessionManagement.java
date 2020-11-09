package com.company.relations;

import com.company.connection.DbAdapter;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class SessionManagement
{
    private static DbAdapter dbAdapter;
    public SessionManagement(DbAdapter adapter)
    {
        dbAdapter = adapter;
    }

    public void createSessionManagementTable()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlCreate = "CREATE TABLE SESSION_MANAGEMENT      " +
                    "(SESSION_ID        INT                 NOT NULL," +
                    "USER_ID            VARCHAR(50)   REFERENCES USER_  ON DELETE CASCADE," +
                    "LOGIN_TIME         VARCHAR(50)                ," +
                    "LOGOUT_TIME        VARCHAR(50)                ," +
                    "PRIMARY KEY (SESSION_ID)                      );";
            statement.executeUpdate(sqlCreate);
            statement.close();
        }
        catch (Exception e) { e.printStackTrace(); }
    }

    public void dropSessionManagementTable()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlDelete = "DROP TABLE SESSION_MANAGEMENT;";
            statement.executeUpdate(sqlDelete);
            statement.close();
        }
        catch(Exception e) { e.printStackTrace(); }
    }

    public int getMaxSessionID()
    {
        int maxSessionID = 1;
        try
        {
            String sql = "select max(session_id) from session_management;";
            PreparedStatement ps = dbAdapter.getConnection().prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            if(rs.next())
                maxSessionID = rs.getInt(1) + 1;
        }
        catch(Exception e) { e.printStackTrace(); }

        return maxSessionID;
    }

    public void deleteAll()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlDrop = "DELETE FROM SESSION_MANAGEMENT;";
            statement.executeUpdate(sqlDrop);
            statement.close();
        }
        catch(Exception e){ e.printStackTrace(); }
    }
}