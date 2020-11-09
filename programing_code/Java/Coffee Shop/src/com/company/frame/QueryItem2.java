package com.company.frame;

import javax.swing.*;

public class QueryItem2 extends JPanel
{
    private JCheckBox checkbox;
    private JLabel label;

    public QueryItem2(String labelText) {
        checkbox = new JCheckBox();
        label = new JLabel(labelText);
        this.add(checkbox);
        this.add(label);
    }

    public boolean isSelected() {
        return checkbox.isSelected();
    }
}
