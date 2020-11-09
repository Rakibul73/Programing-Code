package test;
import java.util.Scanner;
public class  Trmata {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int a ,b,c;
        a= inp.nextInt();
        b=inp.nextInt();
        c= (a>b)?a:b;
        System.out.println("big num is ="+c);
    }
}