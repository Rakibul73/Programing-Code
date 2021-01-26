
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    long long int i=1,j=1, n, m, a;
    long long int z;
    scanf("%lld %lld %lld", &n, &m, &a);\
    if(n%a != 0) {
        i=(n/a)+1;
    }
    if(n%a==0) {
        i=n/a;
    }

    if(m%a != 0) {
        j=(m/a)+1;
    }
    if(m%a==0) {
        j=m/a;
    }
    z=i*j;


    printf("%lld\n", z);
    return 0;
}
