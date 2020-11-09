#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int i, ara[10], j;

    for(i = 0; i < 10; i++) {
        ara[i] = rand()%50;
    }
    for(i = 0; i < 10; i++) {
        printf("%d\n", ara[i]);
    }

    return 0;

}
