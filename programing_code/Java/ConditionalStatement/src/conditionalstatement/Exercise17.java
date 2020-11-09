package conditionalstatement;

import java.util.Scanner;

public class Exercise17 {

    public static void main(String[] args) {
        int i, j, n;

        System.out.print("Input number of n : ");
        Scanner in = new Scanner(System.in);
        n = in.nextInt();

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                System.out.print(i);
            }
            System.out.println("");
        }
    }
}
