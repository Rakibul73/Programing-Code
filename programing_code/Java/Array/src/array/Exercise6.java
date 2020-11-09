package array;

public class Exercise6 {
       public static int  findIndex (int[] my_array, int t) {
        if (my_array == null) return -1;
        int len = my_array.length;
        int i = 1;
        while (i < len) {
            if (my_array[i] == t) return i;
            else i=i+1;
        }
        return -1;
    }
    public static void main(String[] args) {
      int[] my_array = {25, 14, 56, 15, 36, 56, 77, 18, 29, 49};
      System.out.println("Index position of 25 is: " + findIndex(my_array, 14));
      System.out.println("Index position of 77 is: " + findIndex(my_array, 77));
       }
}
