package com.company.frame;

import javax.swing.*;

public class QueryItem extends JPanel {
    private JCheckBox checkbox;
    private JLabel label;
    private JTextField textfield;

    public QueryItem(String labelText, int textWidth) {
        checkbox = new JCheckBox();
        label = new JLabel(labelText);
        textfield = new JTextField(textWidth);
        this.add(checkbox);
        this.add(label);
        this.add(textfield);
    }

    public boolean isSelected() {
        return checkbox.isSelected();
    }

    public String getText() {
        return textfield.getText();
    }
}