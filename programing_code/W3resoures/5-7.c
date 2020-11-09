#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d", &n);
    printf("\n");
    for(i=1; i<=10; i++) {
        for(j=1; j<=n; j++) {
            printf("\t%d X %d X %d\n", j, i, i*j);
        }
        printf("\n\n\n");
    }
    return 0;
}
