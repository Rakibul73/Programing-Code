
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <stdio.h>

int main()
{
    int n,X=0;
    char a[4];
    scanf("%d", &n);
    gets(a);
    for(int i=1; i<=n; i++) {
        gets(a);
        for(int i=1; i<4; i++) {

        if(a[i] == '+') {
            X++;
            break;
        }
        if(a[i] == '-') {
            X--;
            break;
        }
        }
    }
    printf("%d\n", X);
    return 0;
}
