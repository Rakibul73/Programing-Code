package array;

import java.util.ArrayList;
  import java.util.Arrays;
  public class Exercise21 {
  public static void  main(String[] args)
  {
  ArrayList<String> list = new ArrayList<String>();

  list.add("Python");
 
  list.add("Java");
 
  list.add("PHP");
  
  list.add("C#");
 
  list.add("C++");
  
  list.add("Perl");
 
  String[]  my_array = new String[list.size()];
  
  list.toArray(my_array);
  
  for (String  string : my_array)
  {
  System.out.println(string);
  }
  }
  }
