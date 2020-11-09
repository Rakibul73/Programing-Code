package com.company.frame;

import javax.swing.*;
import java.util.Vector;

public class MyTable extends JTable {
    public MyTable(Vector data, Vector title) {
        super(data, title);
    }

    @Override
    public boolean isCellEditable(int row, int column) {
        if (column == 0) return false;
        else return true;
    }
}