package com.company.frame;

import javax.swing.*;

public class Line2 extends JPanel
{
    private JLabel label;
    private JPasswordField textfield;

    public Line2(String labelText, int textWidth)
    {
        label = new JLabel(labelText);
        textfield = new JPasswordField(textWidth);
        textfield.setEchoChar('*');
        this.add(label);
        this.add(textfield);
    }

    public String getText() { return textfield.getText(); }
}
