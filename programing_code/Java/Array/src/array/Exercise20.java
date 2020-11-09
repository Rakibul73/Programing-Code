package array;

import java.util.ArrayList;
  import java.util.Arrays;
public class Exercise20 {
  public static void  main(String[] args) 
  {
  String[]  my_array = new String[] {"Python", "JAVA", "PHP",  "Perl", "C#", "C++"};
  ArrayList<String>  list = new ArrayList<String>(Arrays.asList(my_array));
  
  System.out.println(list);
  }
}
