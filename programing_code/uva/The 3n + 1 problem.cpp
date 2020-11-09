#include<bits/stdc++.h>
using namespace std;

int bb(int n)
{
    int c=1;
    if(n==1) {
        return c;
    }
    while(n>1) {
        if(n%2 != 0) {
            n=(3*n)+1;
        }
        else {
            n=n/2;
        }
        c++;
    }
    return c;
}
int main()
{
    int i, j,a,b, mx=0;
    scanf("%d %d", &i, &j);
    for(a=i; a<=j; a++) {
        b=bb(a);
        if(b>mx) {
            mx=b;
        }
    }
    printf("%d %d %d\n", i, j, mx);
}
