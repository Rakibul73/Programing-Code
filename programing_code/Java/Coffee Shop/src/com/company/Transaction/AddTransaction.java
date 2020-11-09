package com.company.Transaction;

import com.company.connection.DbAdapter;
import com.company.frame.MyTable;
import com.company.frame.QueryItem;
import com.company.frame.QueryItem2;
import com.company.relations.Customer;
import com.company.relations.Product;
import com.company.relations.Tran_Pro;
import com.company.relations.Transaction;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Arrays;
import java.util.List;
import java.util.Vector;

public class AddTransaction extends JFrame
{
    private final int COLUMN = 7;
    private final List<String> TITLES = Arrays.asList(
            "CUSTOMER_ID", "PRODUCT_ID", "PRODUCT.NAME", "QUANTITY", "COUNT", "LIFE_POINTS", "AVG_POINTS");
    private Vector<Vector<String>> dataModel = new Vector<Vector<String>>();

    private QueryItem customerID = new QueryItem("CUSTOMER_ID: ", 8);
    private QueryItem productID = new QueryItem("PRODUCT_ID: ", 8);
    private QueryItem quantity = new QueryItem("QUANTITY: ", 4);
    private QueryItem2 usePoints = new QueryItem2("USE POINTS");
    private JButton createNewCustomer = new JButton("NEW CUSTOMER");
    private JButton createNewProduct = new JButton("NEW PRODUCT");
    private JButton clear = new JButton("CLEARALL");
    private JButton confirmTransaction = new JButton("CONFIRM");
    private JTextArea textarea = new JTextArea(5, 5);
    private MyTable table;

    private static DbAdapter dbAdapter;

    public AddTransaction(DbAdapter adapter)
    {
        dbAdapter = adapter;
        this.setTitle("Create a new Transaction");

        Vector<String> titles = new Vector<String>(TITLES);
        table = new MyTable(dataModel, titles);
        table.getColumnModel().getColumn(2).setPreferredWidth(130);

        JPanel controlPanel = new JPanel();
        controlPanel.setLayout(new FlowLayout(FlowLayout.CENTER, 10, 25));
        controlPanel.add(customerID);
        controlPanel.add(productID);
        controlPanel.add(quantity);
        controlPanel.add(usePoints);
        confirmTransaction.setPreferredSize(new Dimension(130, 25));
        controlPanel.add(confirmTransaction);
        createNewCustomer.setPreferredSize(new Dimension(130, 25));
        controlPanel.add(createNewCustomer);
        createNewProduct.setPreferredSize(new Dimension(130, 25));
        controlPanel.add(createNewProduct);
        clear.setPreferredSize(new Dimension(130, 25));
        controlPanel.add(clear);
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

    private void setActionListener()
    {
        confirmTransaction.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if(customerID.getText().equals("") || productID.getText().equals("") || quantity.getText().equals(""))
                    return;

                if(! usePoints.isSelected())
                {
                    Transaction transaction = new Transaction(dbAdapter);
                    String transaction_id = String.valueOf(transaction.getMaxTransactionID());
                    transaction.insertTransaction(transaction_id, customerID.getText());
                    Tran_Pro tran_pro = new Tran_Pro(dbAdapter);
                    System.out.println(productID.getText());
                    tran_pro.insertTran_Pro(transaction_id, productID.getText(), quantity.getText());
                    Product product = new Product(dbAdapter);
                    product.updateCount(productID.getText(), quantity.getText());
                    Customer customer = new Customer(dbAdapter);
                    customer.addPoints(customerID.getText(), quantity.getText());
                }
                else
                    {
                        Customer customer = new Customer(dbAdapter);
                        int avgPoints = customer.getAvgPoints(customerID.getText());
                        if(avgPoints < 25) return;
                        //insert into transaction.
                        Transaction transaction = new Transaction(dbAdapter);
                        String transactionID = String.valueOf(transaction.getMaxTransactionID());
                        transaction.insertTransaction(transactionID, customerID.getText());
                        //insert into tran_pro.
                        Product product = new Product(dbAdapter);
                        Tran_Pro tran_pro = new Tran_Pro(dbAdapter);
                        String productID = product.getCheapestProductID();
                        tran_pro.insertTran_Pro(transactionID, productID, "1");
                        product.updateCount(productID, "1");
                        customer.updateAvgPoints(customerID.getText());
                    }

                String sql = "select customer_id, product_id, product.name, quantity, count, life_points, avg_points " +
                        "from tran_pro natural join transaction natural join customer natural join product " +
                        "where customer_id = '" + customerID.getText() + "' and product_id = " + productID.getText() +
                        " and quantity = " + quantity.getText() + " limit 1;";
                Vector<String> temp = new Vector<>();
                try
                {
                    Statement statement = dbAdapter.getConnection().createStatement();
                    ResultSet rs = statement.executeQuery(sql);
                    if(rs.next())
                    {
                        for(int i = 1; i < 8; i++)
                        {
                            temp.add(rs.getString(i));
                        }
                    }
                }
                catch (Exception error) { error.printStackTrace();}

                dataModel.add(temp);

                //更新表格
                table.validate();
                table.updateUI();
            }
        });

        clear.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                dataModel.clear();
                table.validate();
                table.updateUI();
            }
        });

        createNewCustomer.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                new CreateNewCustomer(dbAdapter);
            }
        });

        createNewProduct.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                new CreateNewProduct(dbAdapter);
            }
        });
    }
}
