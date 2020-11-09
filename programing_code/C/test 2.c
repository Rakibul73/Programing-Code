#include <stdio.h>
#include <math.h>

int main () {
   double a, b;
   int c;
   a = 9;
   b = 3;
   c = 2;
   double z=(double)c;
   printf("Remainder of %lf / %lf is %lf\n", a, c, fmod(a,c));
   printf("Remainder of %lf / %lf is %lf\n", a, c, z);

   return(0);
}
