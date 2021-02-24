
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/23 15:37:01



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
long long INFF = 1000000000000000005LL;

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        long long p, a, b, c;
        cin>>p>>a>>b>>c;
        long long low= INFF, i = 0;
        if(p > a) {
            if(p%a == 0) {
                i = (p/a);
                a = i*a;
            }
            else {
                i = (p/a) + 1;
                a = i*a;
            }
        }
        i = 0;
        if(p > b) {
            if(p%b == 0) {
                i = (p/b);
                b = i*b;
            }
            else {
                i = (p/b) + 1;
                b = i*b;
            }
        }
        i = 0;
        if(p > c) {
            if(p%c == 0) {
                i = (p/c);
                c = i*c;
            }
            else {
                i = (p/c) + 1;
                c = i*c;
            }
        }
        if(low > (a - p)) {
            low = a - p;
        }
        if(low > (b - p)) {
            low = b - p;
        }
        if(low > (c - p)) {
            low = c - p;
        }
        cout<<low<<"\n";
        t--;
    }
    return 0;
}