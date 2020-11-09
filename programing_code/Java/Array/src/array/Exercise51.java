package array;

import java.util.Arrays;

public class Exercise51 {
    public static void main(String[] args)
    {
        int arr[] = new int[]{ 0, 0, 1, 1, 0, 1, 1, 1,0 };
        int result[];
        System.out.println("Original Array ");
        System.out.println(Arrays.toString(arr));

        int n = arr.length;
 
        result = separate_0_1(arr, n);
        System.out.println("New Array ");
        System.out.println(Arrays.toString(result));
      }
    
    static int [] separate_0_1(int arr[], int n)
     {
        int count = 0;   
     
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0)
                count++;
        }
 
        for (int i = 0; i < count; i++)
            arr[i] = 0;
 
        for (int i = count; i < n; i++)
            arr[i] = 1;
    
         return arr;
     }       
   }
