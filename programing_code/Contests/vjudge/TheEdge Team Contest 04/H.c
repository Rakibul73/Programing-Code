#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int V,N;
    scanf("%d %d", &V, &N);
    int b=(V*N), c=10;
    double a;
    a=(double)b/c;
    int e= ceil(a*1.0);
    int f= ceil(a*2.0);
    int g= ceil(a*3.0);
    int h= ceil(a*4.0);
    int i= ceil(a*5.0);
    int j= ceil(a*6.0);
    int k= ceil(a*7.0);
    int l= ceil(a*8.0);
    int m= ceil(a*9.0);
    printf("%d %d %d %d %d %d %d %d %d\n",e, f, g, h, i, j, k, l ,m);
}
