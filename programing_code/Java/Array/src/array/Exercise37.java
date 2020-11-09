package array;

import java.util.*;
public class Exercise37
{
    public static ArrayList<ArrayList<Integer>> Exercise37(ArrayList<ArrayList<Integer>> A) {
        ArrayList<ArrayList<Integer>> result = new ArrayList<ArrayList<Integer>>();
        int m = A.size();
        int n = A.get(0).size();
        ArrayList<Integer> temp = new ArrayList<Integer>();
        temp.add(A.get(0).get(0));
        result.add(new ArrayList<Integer>(temp));
        int i = 0;
        while(i < m){            
            System.out.printf("For i : %d \n", i );
            int j = i+1;
            while(j < n){
                int k = i;
                int l = j;
                temp.clear();
                System.out.printf("\t For j : %d \n", j );
                while(l >= 0 && k < m){
                    System.out.printf("\t \t For k : %d and l : %d  add \n", k, l, A.get(k).get(l) );
                    temp.add(A.get(k).get(l));
                    k++;
                    l--;
                }
                System.out.println("\t \t Temp : " + temp);
                
                result.add(new ArrayList<Integer>(temp));
                j++;                                
            }
            
            
            i++;
        }
        temp.clear();
        temp.add(A.get(m-1).get(n-1));
        result.add(new ArrayList<Integer>(temp));
        return result;
    }
    
    public static ArrayList<ArrayList<Integer>> diagonalEfficient(ArrayList<ArrayList<Integer>> A) {
        ArrayList<ArrayList<Integer>> result = new ArrayList<ArrayList<Integer>>();
        int m = A.size();
        int n = A.get(0).size();
        ArrayList<Integer> temp = new ArrayList<Integer>();
        temp.add(A.get(0).get(0));
        result.add(new ArrayList<Integer>(temp));
        
        
            int j;
            int i = 0;
            j = i+1;
            while(j < n){
                int k = i;
                int l = j;
                temp.clear();
                while(k < m && l >= 0){
                    temp.add(A.get(k).get(l));
                    k++;
                    l--;
                }
                result.add(new ArrayList<Integer>(temp));
                j++;
            }
            
            i = 1;
            j = n-1;
            while(i < m){
                int k = i;
                int l = j;
                temp.clear();
                while(k < m && l >= 0){
                    temp.add(A.get(k).get(l));
                    k++;
                    l--;
                }
                result.add(new ArrayList<Integer>(temp));
                i++;
            }
                
        
        
        temp.clear();
        return result;
    }
    public static void main(String[] args){
        ArrayList<ArrayList<Integer>> A = new ArrayList<ArrayList<Integer>>();
        ArrayList<Integer> temp = new ArrayList<Integer>();
        temp.add(10);
        temp.add(20);
        temp.add(30);
        A.add(new ArrayList<Integer>(temp));
        temp.clear();
        
        temp.add(50);
        temp.add(60);
        temp.add(70);
        A.add(new ArrayList<Integer>(temp));
        temp.clear();
        
        temp.add(90);
        temp.add(100);
        temp.add(110);
        A.add(new ArrayList<Integer>(temp));
        temp.clear();
        for(ArrayList<Integer> t : A)
            System.out.println(t);
        
        ArrayList<ArrayList<Integer>> result  = diagonalEfficient(A);
        for(ArrayList<Integer> t : result)
            System.out.println(t);
    }
}
