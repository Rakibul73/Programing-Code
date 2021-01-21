
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <stdio.h>
#include <string.h>

int main()
{
    int ara[100], i,m=1;
    gets(ara);

    for(i=0; i<strlen(ara); i++) {
        if(ara[i+1] != ara[i]) {
            m=1;
            printf("#");
        }
        if(ara[i+1] == ara[i]) {
            m++;
            printf("$");
        }
        if(m==7) {
            break;
        }
    }
    printf("%d\n", m);
    if(m<7) {
        printf("NO\n");
    }
    else
        printf("YES\n");
    return 0;
}
