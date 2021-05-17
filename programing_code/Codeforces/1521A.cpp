
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/05/16 18:39:11



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() { 
    long long a, b;
    cin >> a >> b;
    if(b==1)
    {
        cout << "NO\n";
        return;
    }
    else {
        cout << "YES\n";
        //cout << a << " " << a * b << " " << a * (b + 1) << "\n";
        cout << a << " " << a * b << " " << a + (a * b) << "\n";
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