
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/05/29 13:51:22



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n, sum = 0, check, count = 0;
    cin >> n;
    vector<long long> a(n);
    for ( long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<long long> shit;
    multiset <long long> :: iterator itr;
    for (long long i = 0; i < n; i++)
    {
        sum = sum + a[i];
        count++;
        if(a[i] < 0) {
            shit.insert(a[i]);
        }
        if(sum < 0) {
            sum = sum - *shit.begin();
            count--;
            shit.erase(shit.begin());
        }
    }
    cout << count << "\n";
    return;
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    //cin >> t;
    t = 1;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    
    return 0;
}