#include <stdio.h>

int main()
{
    int i,j,spc,rows,k,t=1;
    printf("Input number of rows : ");
    scanf("%d",&rows);
    spc=rows+4-1;
    for(i=1; i<=rows; i++)
    {
        for(k=spc; k>=1; k--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
            printf("%d ",t++);
        printf("\n");
        spc--;
    }
}
