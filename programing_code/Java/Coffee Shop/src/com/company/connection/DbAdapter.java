package com.company.connection;
import java.sql.*;

public class DbAdapter
{
    private String jdbUrl = "jdbc:postgresql://localhost:5432/coffee_shop";
    private String userName = "postgres";
    private String password = "947052";

    private Connection connection = null;
    private Statement statement = null;
    private ResultSet resultSet = null;

    public DbAdapter() { }

    public void connect()
    {
        try
        {
            connection = DriverManager.getConnection(jdbUrl, userName, password);
            System.out.println("Database connection established!");
        }
        catch(SQLException e) { e.printStackTrace(); }
    }

    public void disConnect()
    {
        try
        {
            if(statement != null) statement.close();
            if(resultSet != null)  resultSet.close();
            if(connection != null) connection.close();
            System.out.println("Database connection disconnect!");
        }
        catch (Exception e) { e.printStackTrace(); }
    }

    public Connection getConnection() { return connection; }
}
