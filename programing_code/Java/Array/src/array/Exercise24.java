package array;

import java.util.*;
public class Exercise24 {
 public static void main(String[] args) {

   int total_num;
   int[] numbers = new int[]{1,2,3,4,6,7};
   total_num = 7;
   int expected_num_sum = total_num * ((total_num + 1) / 2);
   int num_sum = 0;
   for (int i: numbers) {
    num_sum += i;
   }
       System.out.print( expected_num_sum - num_sum);
	   System.out.print("\n");
  }
 }
