#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int X1,Y1,X2,Y2;
    scanf("%lld %lld",&X1,&Y1);
    scanf("%lld %lld",&X2,&Y2);
    if(X1==X2 || Y1==Y2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
