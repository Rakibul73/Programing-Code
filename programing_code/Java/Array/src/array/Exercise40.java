package array;

import java.util.*;
import java.lang.*;
public class Exercise40
{
   public static void main (String[] args) 
    {
      int arr[] = {1, 5, -4, 7, 8, -6};
      int size = arr.length;
      int l, r, min_sum, sum, min_l_num, min_r_num;
    
      if(size < 2)
      {
        System.out.println("Invalid Input");
        return;
      }
      
      min_l_num = 0;
      min_r_num = 1;
      min_sum = arr[0] + arr[1];
      
      for(l = 0; l < size - 1; l++)
      {
        for(r = l+1; r < size; r++)
        {
          sum = arr[l] + arr[r];
          if(Math.abs(min_sum) > Math.abs(sum))
          {
            min_sum = sum;
            min_l_num = l;
            min_r_num = r;
          }
        }
      }
      
      System.out.println("Two elements whose sum is minimum are "+
                        arr[min_l_num]+ " and "+arr[min_r_num]);
    }
}
