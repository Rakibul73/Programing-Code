package com.company.Transaction;

import com.company.connection.DbAdapter;
import com.company.frame.Line;
import com.company.frame.TwoButton;

import javax.swing.*;
import javax.swing.border.EmptyBorder;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowEvent;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import static com.sun.deploy.uitoolkit.ToolkitStore.dispose;

public class CreateNewProduct
{
    private Line customerID = new Line("Product ID: ",15);
    private Line firstName = new Line("        Name: ",15);
    private Line lastName = new Line("        Count: ",15);
    private Line address = new Line("         Price: ",15);
    private Line category = new Line("  Category: ", 15);
    private TwoButton button = new TwoButton("CONFIRM", "QUIT");

    private static DbAdapter dbAdapter;
    JFrame frame;


    public CreateNewProduct(DbAdapter adapter)
    {
        dbAdapter = adapter;
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                frame = new JFrame("Create new Product");
                frame.add(new CreateNewProduct.MenuPane());
                frame.pack();
                frame.setLocationRelativeTo(null);
                frame.setMinimumSize(new Dimension(500, 500));
                frame.setVisible(true);
                frame.setResizable(false);
                setActionListener();
            }
        });

    }

    private static void close()
    {
        try{ dispose(); }
        catch(Exception e){e.printStackTrace();}
    }

    private void setActionListener()
    {
        button.getFirstButton().addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String id = customerID.getText();
                String sname = firstName.getText();
                String ssex = lastName.getText();
                String sclass = address.getText();
                String ctego = category.getText();

                try
                {
                    String sql = "select product_id from product where product_id = '" + id + "';";
                    PreparedStatement ps = dbAdapter.getConnection().prepareStatement(sql);
                    ResultSet rs = ps.executeQuery();
                    while(rs.next())
                    {
                        if(rs.getString(1) != null)
                            return;
                    }
                }
                catch (Exception error) {error.printStackTrace();}

                try {
                    Statement statement = dbAdapter.getConnection().createStatement();
                    String sqlInsert = "INSERT INTO PRODUCT "+
                            "VALUES (" + id + ", '" + sname + "', " + ssex + ", " + sclass + ", '" + ctego + "');";
                    System.out.println(sqlInsert);
                    statement.executeUpdate(sqlInsert);
                    statement.close();
                    frame.dispatchEvent(new WindowEvent(frame, WindowEvent.WINDOW_CLOSING));

                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }
        });

        button.getLastButton().addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                frame.dispatchEvent(new WindowEvent(frame, WindowEvent.WINDOW_CLOSING));
            }
        });
    }

    private class MenuPane extends JPanel
    {
        public MenuPane()
        {
            setBorder(new EmptyBorder(10, 10, 10, 10));
            setLayout(new GridBagLayout());

            GridBagConstraints gbc = new GridBagConstraints();
            gbc.gridwidth = GridBagConstraints.REMAINDER;
            gbc.anchor = GridBagConstraints.NORTH;

            this.add(new JLabel("<html><h1><strong><i>CREATE PRODUCT</i></strong></h1><hr><h2></h2><h3></h3></html>"), gbc);

            gbc.anchor = GridBagConstraints.CENTER;
            gbc.fill = GridBagConstraints.HORIZONTAL;


            JPanel buttons = new JPanel(new GridBagLayout());

            buttons.add(customerID, gbc);
            buttons.add(Box.createVerticalStrut(50));
            buttons.add(firstName, gbc);
            buttons.add(lastName, gbc);
            buttons.add(Box.createVerticalStrut(50));
            buttons.add(address, gbc);
            buttons.add(category, gbc);
            buttons.add(Box.createRigidArea(new Dimension(0, 150)));
            buttons.add(button, gbc);

            gbc.weighty = 1;
            add(buttons, gbc);
        }
    }
}
