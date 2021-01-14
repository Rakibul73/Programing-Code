#include <stdio.h>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int main()
{
    long w,h, n, t, a;
    scanf("%ld", &t);
    for(int i = 1; i<=t; i++)
    {
        scanf("%ld %ld %ld", &w, &h, &n);
        a=1;
        while(w%2 == 0)
        {
            a=a*2;
            w = w/2;
        }
        while(h%2 == 0)
        {
            a=a*2;
            h=h/2;
        }
        if (a>=n) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

}
