package com.company.sign;

import com.company.UI.EmployeeUI;
import com.company.UI.MainUI;
import com.company.connection.DbAdapter;
import com.company.frame.Line;
import com.company.frame.Line2;
import com.company.frame.TwoButton;

import javax.swing.*;
import javax.swing.border.EmptyBorder;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowEvent;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class Sign
{
    private Line userName = new Line("User Name: ",15);
    private Line2 password = new Line2(" Password: ", 15);
    private TwoButton button = new TwoButton("CONFIRM", "REGISTER");
    private JFrame frame;

    private int flag = 0;

    private static DbAdapter dbAdapter = new DbAdapter();

    public Sign()
    {
        dbAdapter.connect();
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                frame = new JFrame("Coffee Shop");
                frame.add(new Sign.MenuPane());
                frame.pack();
                frame.setLocationRelativeTo(null);
                frame.setMinimumSize(new Dimension(500, 500));
                frame.setVisible(true);
                frame.setResizable(false);
                setActionListener();
                frame.addWindowListener(new java.awt.event.WindowAdapter() {
                    @Override
                    public void windowClosing(java.awt.event.WindowEvent windowEvent)
                    {
                        if(flag == 0)
                        {
                            dbAdapter.disConnect();
                            System.exit(0);
                        }
                    }
                });
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

            this.add(new JLabel("<html><h1><strong><i>PLEASE SIGN IN</i></strong></h1><hr></html>"), gbc);

            gbc.anchor = GridBagConstraints.CENTER;
            gbc.fill = GridBagConstraints.HORIZONTAL;

            JPanel buttons = new JPanel(new GridBagLayout());
            buttons.add(userName, gbc);
            buttons.add(Box.createVerticalStrut(50));
            buttons.add(password, gbc);
            buttons.add(Box.createRigidArea(new Dimension(0, 100)));
            buttons.add(button, gbc);

            gbc.weighty = 1;
            add(buttons, gbc);
        }
    }

    private void setActionListener()
    {
        button.getFirstButton().addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String userID = userName.getText();
                String word = password.getText();
                int maxId = 1;
                String sql = "select password from user_ where user_id = '" + userID + "';";
                try
                {
                    PreparedStatement ps = dbAdapter.getConnection().prepareStatement(sql);
                    ResultSet rs = ps.executeQuery();
                    while(rs.next())
                    {
                        if(word.equals(rs.getString("password")))
                        {
                            String updateSessionManagement = "select max(session_id) from session_management";
                            ps = dbAdapter.getConnection().prepareStatement(updateSessionManagement);
                            rs = ps.executeQuery();
                            if (rs.next())
                            {
                                maxId = rs.getInt(1) + 1;
                                DateTimeFormatter dtf = DateTimeFormatter.ofPattern("yyyy/MM/dd HH:mm:ss");
                                LocalDateTime now = LocalDateTime.now();
                                Statement statement = dbAdapter.getConnection().createStatement();
                                String sqlInsert = "INSERT INTO SESSION_MANAGEMENT (SESSION_ID, USER_ID, LOGIN_TIME, LOGOUT_TIME) "+
                                        "VALUES (" + maxId + ", '" + userID + "', '" + dtf.format(now) + "', '---" +"');";
                                statement.executeUpdate(sqlInsert);
                                statement.close();
                            }
                            String checkPrivilege = "select privilege from user_ where user_id = '" + userID + "';";
                            ps = dbAdapter.getConnection().prepareStatement(checkPrivilege);
                            rs = ps.executeQuery();
                            if(rs.next())
                            {
                                int privilege = rs.getInt("privilege");
                                if(privilege == 1) {startMainUI(userID, maxId);}
                                else startEmployeeUI(userID, maxId);
                            }
                        }
                    }
                    ps.close();
                    rs.close();
                }
                catch (Exception error) {error.printStackTrace();}
            }
        });

        button.getLastButton().addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                new Register(dbAdapter);
            }
        });
    }

    private void startMainUI(String userID, int maxID)
    {
        flag = 1;
        new MainUI(dbAdapter, userID, maxID);
        frame.dispatchEvent(new WindowEvent(frame, WindowEvent.WINDOW_CLOSING));
    }

    private void startEmployeeUI(String userID, int maxID)
    {
        flag = 1;
        new EmployeeUI(dbAdapter, userID, maxID);
        frame.dispatchEvent(new WindowEvent(frame, WindowEvent.WINDOW_CLOSING));
    }
}



