#include <stdio.h>
 int main()
 {
     int ara[]={1,4,5,6,7,9,12,15,19,24,26,28,30,35,39,40};
     int low_indx = 0;
     int high_indx = 15;
     int mid_indx;
     int num = 24;
     while (low_indx <= high_indx) {
         mid_indx = (low_indx + high_indx) / 2;
         if (num == ara[mid_indx]) {
             break;
         }
         if (num < ara[mid_indx]) {
             high_indx = mid_indx - 1;
         }
         else {
             low_indx = mid_indx + 1;
         }
     }
     if (low_indx > high_indx) {
         printf("%d is not in the array\n", num);
     }
     else {
         printf("%d is found in the array. It's position is %d in the array.\n", ara[mid_indx], mid_indx);
     }
     return 0;
 }
