
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/06/04 20:56:14



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void solve() {
    int s1, s2, s3, s4, x, y, a, b;
    cin >> s1 >> s2 >> s3 >> s4;
    x = max(s1, s2);
    a = min(s1, s2);
    y = min(s3, s4);
    b = max(s3, s4);
    if(x < y || a > b) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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