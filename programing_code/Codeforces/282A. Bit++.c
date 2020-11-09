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
