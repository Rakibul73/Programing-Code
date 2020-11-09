package com.company.relations;

import com.company.connection.DbAdapter;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class Product
{
    private static DbAdapter dbAdapter;
    public Product(DbAdapter adapter) { dbAdapter = adapter; }

    public void createProduct()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlCreate = "CREATE TABLE PRODUCT                        " +
                    "(PRODUCT_ID       INT                        NOT NULL," +
                    "NAME              VARCHAR(50)                        ," +
                    "COUNT             INT                                ," +
                    "PRICE             NUMERIC(5,2)                       ," +
                    "CATEGORY_TYPE     VARCHAR(10)  CHECK (CATEGORY_TYPE IN ('DONUTS', 'BEVERAGES', 'BAGELS'" +
                    ", 'donuts', 'beverages', 'bagels'))," +
                    "PRIMARY KEY (PRODUCT_ID));";
            statement.executeUpdate(sqlCreate);
            statement.close();
        }
        catch (Exception e) { e.printStackTrace(); }
    }

    public void dropProductTable()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlDelete = "DROP TABLE PRODUCT;";
            statement.executeUpdate(sqlDelete);
            statement.close();
        }
        catch(Exception e) { e.printStackTrace(); }
    }

    public void updateCount(String productID, String quantity)
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlDelete = "update product set count = count - " + quantity + " where product_id = " + productID + ";";
            statement.executeUpdate(sqlDelete);
            statement.close();
        }
        catch (Exception e) { e.printStackTrace(); }
    }

    public String getCheapestProductID()
    {
        String cheapestProductID = null;
        try
        {
            String sql = "select product_id from product where price = (select min(price) from product) limit 1;";
            PreparedStatement ps = dbAdapter.getConnection().prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            if(rs.next())
                cheapestProductID = rs.getString(1);
            ps.close();
            rs.close();
        }
        catch (Exception e) { e.printStackTrace(); }

        return cheapestProductID;
    }

    public void deleteAll()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlDrop = "DELETE FROM PRODUCT;";
            statement.executeUpdate(sqlDrop);
            statement.close();
        }
        catch(Exception e){ e.printStackTrace(); }
    }
}
