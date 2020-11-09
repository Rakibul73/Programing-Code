package conditionalstatement;

import java.util.Scanner;

public class Exercise12 {

    public static void main(String[] args) {
        int i, n = 0, s = 0;
        double avg;
        {

            System.out.println("Input the 5 numbers : ");

        }
        for (i = 0; i < 5; i++) {
            Scanner in = new Scanner(System.in);
            n = in.nextInt();

            s += n;
        }
        avg = s / 5;
        System.out.println("The sum of 5 no is : " + s + "\nThe Average is : " + avg);

    }
}
