
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include<stdio.h>
#include <string.h>

int main()
{

    int i, n, j;
    char ch[100];
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        scanf("%s", &ch);
        if(strlen(ch) <= 10) {
            printf("%s\n", ch);
        }
        else {
            printf("%c%d%c\n", ch[0], (strlen(ch)-2), ch[strlen(ch)-1]);
        }
    }

    return 0;
}
