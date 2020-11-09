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

public class SessionManagementUI extends JFrame {
    private final int COLUMN = 4;
    private final List<String> TITLES = Arrays.asList(
            "SESSION_ID", "USER_ID", "LOGIN_TIME", "LOGOUT_TIME");
    private Vector<Vector<String>> dataModel = new Vector<Vector<String>>();
    private QueryItem productID = new QueryItem("SESSION_ID：", 10);
    private QueryItem name = new QueryItem("USER_ID：", 10);
    private QueryItem count = new QueryItem("LOGIN_TIME：", 10);
    private QueryItem price = new QueryItem("LOGOUT_TIME：", 22);
    private JButton queryBtn = new JButton("SEARCH");
    private JButton deleteBtn = new JButton("DELETE");
    //private JButton deleteAllBtn = new JButton("DELETE ALL");
    private JTextArea textarea = new JTextArea(5, 5);
    private MyTable table;

    private static DbAdapter dbAdapter;

    //构造函数，负责创建用户界面
    public SessionManagementUI(DbAdapter adapter) {
        this.setTitle("Session Management");
        dbAdapter = adapter;

        Vector<String> titles = new Vector<String>(TITLES);
        table = new MyTable(dataModel, titles);
        //table.getColumnModel().getColumn(0).setPreferredWidth(90);
        //table.getColumnModel().getColumn(4).setPreferredWidth(150);

        JPanel controlPanel = new JPanel();
        controlPanel.setLayout(new FlowLayout());
        controlPanel.add(productID);
        controlPanel.add(name);
        controlPanel.add(count);
        controlPanel.add(price);
        controlPanel.add(Box.createRigidArea(new Dimension(1000,0)));
        controlPanel.add(queryBtn);
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
                if (productID.isSelected()) conditions.add("(SESSION_ID = '" + productID.getText() + "')");
                if (name.isSelected()) conditions.add("(USER_ID = '" + name.getText() + "')");
                if (count.isSelected()) conditions.add("(LOGIN_TIME = '" + count.getText() + "')");
                if (price.isSelected()) conditions.add("(LOGOUT_TIME = '" + price.getText() + "')");

                StringBuilder sb = new StringBuilder();
                sb.append("select * from session_management");
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

        //将用户当前选中的记录从数据库中删除
        deleteBtn.addActionListener(new ActionListener() {

            @Override
            public void actionPerformed(ActionEvent e) {
                int row = table.getSelectedRow();
                String sid = dataModel.get(row).get(0);
                String sql = "delete from session_management where product_id = '" + sid + "';";

                //在文本框显示 SQL 命令
                textarea.setText(sql);

                try {
                    Statement statement = dbAdapter.getConnection().createStatement();
                    String sqlDelete = "DELETE FROM SESSION_MANAGEMENT WHERE SESSION_ID = '" + sid + "';";
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





