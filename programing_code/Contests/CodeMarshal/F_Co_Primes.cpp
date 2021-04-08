
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/04/07 19:51:11



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int T , i;

long long gcd_fast(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd_fast(b, a % b);
}

void solve() {
    long long a , b , m , ans = 0;
    cin>>a>>b>>m;
    if(a % 2 == 0 && b % 2 == 0) {
        if(a + 2 == b || b + 2 == a) {
            cout<<"Case "<<i<<": "<<m<<"\n";
            return;
        }
        else {
            for (long long i = 1; i <= m; i = i + 2)
            {
                if(gcd_fast(a + i, b + i) == 1) {
                    ans++;
                }
            }
            cout<<"Case "<<i<<": "<<ans<<"\n";
            return;
        }
    }
    else if (a % 2 != 0 && b % 2 != 0) {
        if(a + 2 == b || b + 2 == a) {
            cout<<"Case "<<i<<": "<<m + (long long)1 <<"\n";
            return;
        }
        else {
            for (long long i = 0; i <= m; i = i + 2)
            {
                if(gcd_fast(a + i, b + i) == 1) {
                    ans++;
                }
            }
            cout<<"Case "<<i<<": "<<ans<<"\n";
            return;
        }
    }
    else {
        if(a + 1 == b || b + 1 == a) {
            cout<<"Case "<<i<<": "<<m + (long long)1 <<"\n";
            return;
        }
        else {
            for (long long i = 0; i <= m; i++)
            {
                if(gcd_fast(a + i, b + i) == 1) {
                    ans++;
                }
            }
            cout<<"Case "<<i<<": "<<ans<<"\n";
            return;
        }
    }
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    
    cin>>T;
    for ( i = 1; i <= T; i++)
    {
        solve();
    }
    
    
    return 0;
}