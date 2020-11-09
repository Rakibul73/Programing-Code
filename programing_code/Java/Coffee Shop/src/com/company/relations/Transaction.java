package com.company.relations;

import com.company.connection.DbAdapter;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class Transaction
{
    private static DbAdapter dbAdapter;
    public Transaction(DbAdapter adapter)
    {
        dbAdapter = adapter;
    }

    public void createTransactionTable()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlCreate = "CREATE TABLE TRANSACTION              " +
                    "(TRANSACTION_ID     INT                NOT NULL," +
                    "CUSTOMER_ID         VARCHAR(50)        REFERENCES CUSTOMER ON DELETE CASCADE ," +
                    "PRIMARY KEY (TRANSACTION_ID));";
            statement.executeUpdate(sqlCreate);
            statement.close();
        }
        catch (Exception e) { e.printStackTrace(); }
    }

    public void dropTransactionTable()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlDelete = "DROP TABLE TRANSACTION;";
            statement.executeUpdate(sqlDelete);
            statement.close();
        }
        catch(Exception e) { e.printStackTrace(); }
    }

    public int getMaxTransactionID()
    {
        int maxTransactionId = 1;
        try
        {
            String sql = "select max(transaction_id) from transaction;";
            PreparedStatement ps = dbAdapter.getConnection().prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            if(rs.next())
            {
                maxTransactionId = rs.getInt(1) + 1;
            }
            ps.close();
            rs.close();
        }
        catch (Exception e) { e.printStackTrace(); }

        return maxTransactionId;
    }

    public void insertTransaction(String transactionID, String customerID)
    {
        try
        {
            String sql = "insert into transaction values (" + transactionID + ", '" + customerID + "');";
            Statement statement = dbAdapter.getConnection().createStatement();
            statement.executeUpdate(sql);
            statement.close();
        }
        catch (Exception e) { e.printStackTrace(); }
    }

    public void deleteAll()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlDrop = "DELETE FROM TRANSACTION;";
            statement.executeUpdate(sqlDrop);
            statement.close();
        }
        catch(Exception e){ e.printStackTrace(); }
    }

    public String getCustomerID(String transactionID)
    {
        String customerID = null;
        try
        {
            String sql = "select customer_id from transaction where transaction_id = " + transactionID + ";";
            PreparedStatement ps = dbAdapter.getConnection().prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            if(rs.next())
            {
                customerID = rs.getString(1);
            }
            ps.close();
            rs.close();
        }
        catch (Exception e) { e.printStackTrace(); }
        return customerID;
    }
}
