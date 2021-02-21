
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/21 16:33:04



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
long long INFF = 1000000000000000005LL;

int main() {
    // Below function is A fast IO program
    fast_cin();
    long long n, m, amax = -1, amin = INFF, bmin = INFF, ans;
    cin>>n>>m;
    vector<long long> a(n),b(m);
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
        if (a[i] > amax)
        {
            amax = a[i];
        }
        if (a[i] < amin)
        {
            amin = a[i];
        }
    }
    for (long long i = 0; i < m; i++)
    {
        cin>>b[i];
        if (b[i] < bmin)
        {
            bmin = b[i];
        }
    }
    if(amin*2 >= bmin) {
        ans = -1;
    }
    else if (amax >= bmin) {
        ans = -1;
    }
    else if (amin*2 < amax) {
        ans = amax;
    }
    else {
        ans = amin*2;
    }
    cout<<ans<<"\n";
    

    
    return 0;
}