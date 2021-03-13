
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/13 13:52:19



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

long long gcd_fast(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd_fast(b, a % b);
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    long long a, b;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        // // GCD common ase naki 1 bad diya ,,, eda chk krte hoibo..
        long long c = gcd_fast(a, b);
        if( c > 1) {
            cout<<"Sim\n";
        }
        else {
            cout<<"Nao\n";
        }
    }
    
    return 0;
}