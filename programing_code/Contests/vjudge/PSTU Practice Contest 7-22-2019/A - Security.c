#include<stdio.h>

int main()
{
    int ara[4];
    gets(ara);
    if(ara[0] == ara[1] || ara[2] == ara[1] || ara[2] == ara[3]) {
        printf("Bad\n");
    }
    else {
        printf("Good\n");
    }
    return 0;
}
