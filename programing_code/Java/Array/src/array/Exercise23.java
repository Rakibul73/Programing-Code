package array;

public class Exercise23 {
static void  equality_checking_two_arrays(int[] my_array1, int[] my_array2)
  {
  boolean  equalOrNot = true;
  
  if(my_array1.length == my_array2.length)
  {
  for (int i  = 0; i < my_array1.length; i++)
  {
  if(my_array1[i] != my_array2[i])
  {
  equalOrNot = false;
  }
  }
  }
  else
  {
  equalOrNot  = false;
  }
  
  if  (equalOrNot)
  {
  System.out.println("Two arrays are equal.");
  }
  else
  {
  System.out.println("Two  arrays are not equal.");
  }
  }
  
  public static void  main(String[] args)
  {
  int[] array1 =  {2, 5, 7, 9, 11};
  int[] array2 =  {2, 5, 7, 8, 11};
  int[] array3 =  {2, 5, 7, 9, 11};
  
  equality_checking_two_arrays(array1,  array2);
  equality_checking_two_arrays(array1, array3);
  }
  }

