package com.company.frame;

import javax.swing.*;

public class Line extends JPanel
{
    private JLabel label;
    private JTextField textfield;

    public Line(String labelText, int textWidth)
    {
        label = new JLabel(labelText);
        textfield = new JTextField(textWidth);
        this.add(label);
        this.add(textfield);
    }

    public String getText() {
        return textfield.getText();
    }
}
