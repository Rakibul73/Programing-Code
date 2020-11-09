package conditionalstatement;

import java.util.Scanner;

public class Exercise24 {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.print("Input the number: ");
        int n = in.nextInt();

        for (int i = 0; i < n; i++) {
            for (int spc = n - i; spc > 0; spc--) {
                System.out.print(" ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.print("@");
            }
            System.out.println();
        }
    }
}
