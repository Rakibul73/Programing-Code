#include <stdio.h>

int main()
{
    int n,num=0,a,b,c;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if((a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1)) {
            num++;
        }
    }
    printf("%d\n", num);
    return 0;
}
