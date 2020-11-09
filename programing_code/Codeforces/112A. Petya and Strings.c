#include <stdio.h>
#include <string.h>

int main()
{
    char ara[100], ara2[100];
    int i;
    gets(ara);
    gets(ara2);
    strlwr(ara);
    strlwr(ara2);
    for(i=0; i<strlen(ara); i++) {
        if(ara[i]>ara2[i]) {
            printf("1\n");
            return 0;
        }
        else if(ara[i]<ara2[i]) {
            printf("-1\n");
            return 0;
        }

    }
    printf("0\n");
    return 0;

}
