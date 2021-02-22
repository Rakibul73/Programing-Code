
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/22 20:54:51



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    long long y, k, n, count = 0, j = 1;
    cin>>y>>k>>n;
    long long z = k*j;
    while (y+(z-y) <= n)
    {
        if (y < z) {
            if(z%k == 0) {
                count = z-y;
                break;
            }
        }
        j++;
        z = j*k;
    }
    if (count == 0)
    {
        cout<<"-1";
    }
    else {
        for (long long i = count; i+y <= n; i = i + k)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
    
    return 0;
}