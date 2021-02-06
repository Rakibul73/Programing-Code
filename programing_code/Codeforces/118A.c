
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char ara[200],ara2[200] = ".";
    int i,j;
    scanf("%s", ara);
    for(i=0; i<strlen(ara); i++) {
        if(ara[i] == 'A' || ara[i] == 'O' || ara[i] == 'Y' || ara[i] == 'E' || ara[i] == 'U' || ara[i] == 'I' || ara[i] == 'a' || ara[i] == 'e' || ara[i] == 'i' || ara[i] == 'o' || ara[i] == 'u' || ara[i] == 'y') {
            ara[i]='_';
        }
    }
    for(i=0, j=0; i<strlen(ara); i++) {
        if(ara[i] == '_') {
            continue;
        }
        else {
            ara2[j]=ara[i];
            j++;
        }
    }
    for(i=0; i<strlen(ara2); i++) {
        ara2[i]=tolower(ara2[i]);
    }
    for(i=0; i<strlen(ara2); i++) {
        printf(".%c", ara2[i]);
    }
    return 0;
}
