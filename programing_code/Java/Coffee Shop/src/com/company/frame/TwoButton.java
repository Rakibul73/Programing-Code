package com.company.frame;

import javax.swing.*;
import java.awt.*;

public class TwoButton extends JPanel
{
    private JButton button1;
    private JButton button2;

    public TwoButton(String name1, String name2)
    {
        button1 = new JButton(name1);
        button2 = new JButton(name2);
        button1.setPreferredSize(new Dimension(100, 30));
        button2.setPreferredSize(new Dimension(100, 30));

        this.add(button1);
        this.add(Box.createRigidArea(new Dimension(20, 0)));
        this.add(button2);
    }

    public JButton getFirstButton() { return button1; }

    public JButton getLastButton() { return button2; }
}
