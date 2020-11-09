
package firstprojectdatabase;

import java.sql.*;
import java.util.logging.Level;
import java.util.logging.Logger;


public class Database {
    public static Connection java_Database() {
        Connection conn=null;
        try {
            
            Class.forName("org.sqlite.JDBC");
            Conn = DriverManager.getConnection("jdbc:sqlite:School.db");
            return conn;
        } catch (Exception ex) {
            JOptionPanel.showMessageDialoge(null, e);
            return null;
          
        }
    }
    
}
