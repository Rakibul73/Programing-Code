
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <stdio.h>

int main()
{
    int i;
    scanf("%d", &i);
    if(i%2 == 0 && i != 2) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
