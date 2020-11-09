package array;

public class Main {
public static void main(String[] args) {   
 int [][]a = new int[8][10];    
 for(int i = 0; i < 8; i++)
   {
      for(int j = 0; j < 10; j++)
      {
         System.out.printf("%2d", a[i][j]);
      }
      System.out.println();
   }
}
}
