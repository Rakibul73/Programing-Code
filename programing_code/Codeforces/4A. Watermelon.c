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
