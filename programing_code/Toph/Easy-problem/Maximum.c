#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int ara[N], h;
    for(h=0; h<N; h++) {
        scanf("%d", &ara[h]);
    }

    for(h=0; h<N; h++) {
        if(ara[h]>ara[h+1]) {
            ara[h+1]=ara[h];
        }
    }

    printf("%d\n", ara[N-1]);
    return 0;
}
