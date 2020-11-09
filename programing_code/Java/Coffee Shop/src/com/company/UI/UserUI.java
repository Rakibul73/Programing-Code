package com.company.UI;

import com.company.connection.DbAdapter;
import com.company.frame.MyTable;
import com.company.frame.QueryItem;

import java.awt.BorderLayout;
import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Vector;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;

public class UserUI extends JFrame {
    private final int COLUMN = 5;
    private final List<String> TITLES = Arrays.asList(
            "USER_ID", "FIRST_NAME", "LAST_NAME", "PRIVILEGE", "PASSWORD");
    private Vector<Vector<String>> dataModel = new Vector<Vector<String>>();
    private QueryItem customerID = new QueryItem("USER_ID：", 10);
    private QueryItem firstName = new QueryItem("FIRST_NAME：", 10);
    private QueryItem lastName = new QueryItem("LAST_NAME：", 10);
    private QueryItem address = new QueryItem("PRIVILEGE：", 10);
    private QueryItem password = new QueryItem("PASSWORD：", 10);
    private JButton queryBtn = new JButton("SEARCH");
    private JButton saveBtn = new JButton("UPDATE");
    private JButton insertBtn = new JButton("INSERT");
    private JButton deleteBtn = new JButton("DELETE");
    private JTextArea textarea = new JTextArea(5, 5);
    private MyTable table;

    private static DbAdapter dbAdapter;

    //构造函数，负责创建用户界面
    public UserUI(DbAdapter adapter) {
        this.setTitle("User");
        dbAdapter = adapter;

        Vector<String> titles = new Vector<String>(TITLES);
        table = new MyTable(dataModel, titles);

        JPanel controlPanel = new JPanel();
        controlPanel.setLayout(new FlowLayout());
        controlPanel.add(customerID);
        controlPanel.add(firstName);
        controlPanel.add(lastName);
        controlPanel.add(address);
        controlPanel.add(password);
        controlPanel.add(Box.createRigidArea(new Dimension(1000,0)));
        controlPanel.add(queryBtn);
        controlPanel.add(saveBtn);
        controlPanel.add(insertBtn);
        controlPanel.add(deleteBtn);
        controlPanel.setPreferredSize(new Dimension(0, 130));

        JPanel tablePanel = new JPanel();
        tablePanel.setLayout(new BoxLayout(tablePanel, BoxLayout.Y_AXIS));
        tablePanel.add(Box.createRigidArea(new Dimension(0, 20)));
        tablePanel.add(table.getTableHeader());
        tablePanel.add(new JScrollPane(table));

        JPanel container = new JPanel();
        container.setLayout(new BorderLayout());
        container.add(textarea, BorderLayout.NORTH);
        container.add(tablePanel, BorderLayout.CENTER);

        this.add(controlPanel, BorderLayout.NORTH);
        this.add(container, BorderLayout.CENTER);
        this.add(Box.createRigidArea(new Dimension(20, 0)), BorderLayout.WEST);
        this.add(Box.createRigidArea(new Dimension(20, 0)), BorderLayout.EAST);
        this.add(Box.createRigidArea(new Dimension(0, 20)), BorderLayout.SOUTH);

        setActionListener();
    }

    private void setActionListener() {
        //根据指定条件，列出数据库中满足条件的记录
        queryBtn.addActionListener(new ActionListener()
        {
            @Override
            public void actionPerformed(ActionEvent e) {
                ArrayList<String> conditions = new ArrayList<String>();
                if (customerID.isSelected()) conditions.add("(USER_ID = '" + customerID.getText() + "')");
                if (firstName.isSelected()) conditions.add("(FIRST_NAME = '" + firstName.getText() + "')");
                if (lastName.isSelected()) conditions.add("(LAST_NAME = '" + lastName.getText() + "')");
                if (address.isSelected()) conditions.add("(PRIVILEGE = " + address.getText() + ")");
                if (password.isSelected()) conditions.add("(PASSWORD = " + password.getText() + ")");

                StringBuilder sb = new StringBuilder();
                sb.append("select * from user_");
                int length = conditions.size();
                if (length != 0) sb.append(" where ");
                for (int i = 0; i < length; i++) {
                    sb.append(conditions.get(i));
                    if (i != length - 1) sb.append(" AND ");
                }
                sb.append(";");
                String queryString = sb.toString();
                textarea.setText(queryString);

                dataModel.clear();
                Statement stmt;
                try {
                    stmt = dbAdapter.getConnection().createStatement();
                    ResultSet rs = stmt.executeQuery(queryString);
                    Vector<String> record;
                    while (rs.next()) {
                        record = new Vector<String>();
                        for (int i = 0; i < COLUMN; i++) {
                            record.add(rs.getString(i + 1));
                        }
                        dataModel.add(record);
                    }
                    stmt.close();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
                //更新表格
                table.validate();
                table.updateUI();
            }
        });

        saveBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int row = table.getSelectedRow();
                String sid = dataModel.get(row).get(0);
                ArrayList<String> conditions = new ArrayList<String>();
                if (firstName.isSelected())
                {
                    table.setValueAt(firstName.getText(), row, 1);
                    conditions.add("FIRST_NAME = '" + firstName.getText() + "'");
                }
                if (lastName.isSelected())
                {
                    table.setValueAt(lastName.getText(), row, 2);
                    conditions.add("LAST_NAME = '" + lastName.getText() + "'");
                }
                if (address.isSelected())
                {
                    table.setValueAt(address.getText(), row, 3);
                    conditions.add("PRIVILEGE = " + address.getText() + "");
                }
                if(password.isSelected())
                {
                    table.setValueAt(password.getText(), row, 4);
                    conditions.add("PASSWORD = " + password.getText() + "");
                }

                if(conditions.size() == 0) return;

                StringBuilder sb = new StringBuilder();
                sb.append("update user_ set ");
                for(int i = 0; i < conditions.size(); i++)
                {
                    sb.append(conditions.get(i));
                    if(i != conditions.size() - 1)
                        sb.append(", ");
                }
                sb.append(" where user_id = '" + sid + "';");
                String queryString = sb.toString();
                textarea.setText(queryString);

                Statement stmt;
                try {
                    stmt = dbAdapter.getConnection().createStatement();
                    stmt.executeUpdate(queryString);
                    stmt.close();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
                //更新表格
                table.validate();
                table.updateUI();
            }
        });

        //往数据库中插入一条新的记录
        insertBtn.addActionListener(new ActionListener() {

            @Override
            public void actionPerformed(ActionEvent e) {
                String id = customerID.getText();
                String sname = firstName.getText();
                String ssex = lastName.getText();
                String sclass = address.getText();
                String word = password.getText();

                //在文本框显示 SQL 命令
                String cmd = "insert into user_ values ('" + id + "', '" + sname + "', '" +
                        ssex + "', " + sclass + ", '" + word + "');";
                textarea.setText(cmd);

                try {
                    Statement statement = dbAdapter.getConnection().createStatement();
                    String sqlInsert = "INSERT INTO USER_ (USER_ID, FIRST_NAME, LAST_NAME, PRIVILEGE, PASSWORD) "+
                            "VALUES ('" + id + "', '" + sname + "', '" + ssex + "', " + sclass +", '" + word + "');";
                    System.out.println(sqlInsert);
                    statement.executeUpdate(sqlInsert);
                    statement.close();
                    dataModel.add(new Vector<String>(Arrays.asList(
                            id, sname, ssex, sclass, word)));

                    //更新表格
                    table.validate();
                    table.updateUI();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

        });

        //将用户当前选中的记录从数据库中删除
        deleteBtn.addActionListener(new ActionListener() {

            @Override
            public void actionPerformed(ActionEvent e) {
                int row = table.getSelectedRow();
                String sid = dataModel.get(row).get(0);
                String sql = "delete from user_ where user_id = '" + sid + "';";

                //在文本框显示 SQL 命令
                textarea.setText(sql);

                try {
                    Statement statement = dbAdapter.getConnection().createStatement();
                    String sqlDelete = "DELETE FROM USER_ WHERE USER_ID = '" + sid + "';";
                    statement.executeUpdate(sqlDelete);
                    ((DefaultTableModel)table.getModel()).removeRow(row);
                    statement.close();

                    //更新表格
                    table.validate();
                    table.updateUI();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }
        });
    }
}





