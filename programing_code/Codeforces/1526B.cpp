
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/05/29 14:05:45



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long x, oneoneone, oneone, shit;
    cin >> x;
    oneone = (x % 111) % 11;
    oneoneone = x / 111;
    shit = (11 - oneone) % 11;
    if(oneoneone >= shit) {
        cout << "YES\n";
        return;
    }
    else {
        cout << "NO\n";
        return;
    }
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