#include <stdio.h>

int main()
{
    long long int N;
    scanf("%lld", &N);
    long long int S[N];
    for(int i=0; i<N; i++) {
        scanf("%lld", &S[i]);
    }
    int mx=S[0];
    for(int i=0; i<N-1; i++) {
        if(mx<S[i+1]) {
            mx=S[i+1];
            break;
        }
    }
    if(mx==S[0]) {
        printf("S\n");
    }
    else  {
        printf("N\n");
    }
}
