package com.company.relations;

import com.company.connection.DbAdapter;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.function.DoubleBinaryOperator;

public class Tran_Pro
{
    private static DbAdapter dbAdapter;

    public Tran_Pro(DbAdapter adapter) { dbAdapter = adapter; }

    public void createTran_ProTable() {
        try {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlCreate = "CREATE TABLE TRAN_PRO                 " +
                    "(TRANSACTION_ID     INT                NOT NULL," +
                    "PRODUCT_ID          INT       REFERENCES PRODUCT     ON DELETE CASCADE," +
                    "QUANTITY            INT                        ," +
                    "PRIMARY KEY (TRANSACTION_ID, PRODUCT_ID));";
            statement.executeUpdate(sqlCreate);
            statement.close();
        }
        catch (Exception e) { e.printStackTrace(); }
    }

    public void dropTran_ProTable()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlDelete = "DROP TABLE TRAN_PRO;";
            statement.executeUpdate(sqlDelete);
            statement.close();
        }
        catch(Exception e) { e.printStackTrace(); }
    }

    public void insertTran_Pro(String transactionID, String productID, String quantity)
    {
        try
        {
            int count = -1;
            String countSql = "select count from product where product_id = " + productID + ";";
            Statement statement = dbAdapter.getConnection().createStatement();
            ResultSet rs = statement.executeQuery(countSql);
            if(rs.next())
                count = rs.getInt(1);
            if(count <= 0)
            {
                statement.close();
                rs.close();
                return;
            }
            statement = dbAdapter.getConnection().createStatement();
            String sql = "insert into tran_pro values (" + transactionID + ", " + productID + ", " + quantity + ");";
            System.out.println(sql);
            statement.executeUpdate(sql);
            statement.close();
            statement.close();
            rs.close();
        }
        catch (Exception e) { e.printStackTrace(); }
    }

    public void deleteAll()
    {
        try
        {
            Statement statement = dbAdapter.getConnection().createStatement();
            String sqlDrop = "DELETE FROM TRAN_PRO;";
            statement.executeUpdate(sqlDrop);
            statement.close();
        }
        catch(Exception e){ e.printStackTrace(); }
    }
}