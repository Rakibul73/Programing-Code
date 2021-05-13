
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/05/13 20:48:44



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n, count = 0;
    cin >> n;
    vector<long long> a(n);
    map<long long, long long> b;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] - (i + 1);
    }
    
    for (long long i = 0; i < n; i++)
    {
        b[a[i]]++;
    }
    for (auto &&i : b)
    {
        if(i.second >= 2 ) {
            count = count + (i.second  * (i.second - 1)) / 2;
        }
    }
    
    cout << count << "\n";
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin >> t;
    //t = 1;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    
    return 0;
}