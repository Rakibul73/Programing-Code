
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/05/16 16:23:33



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(is_sorted(a.begin(), a.end())) {
        cout << "0\n";
        return;
    }
    else {
        if(a[n-1] == n || a[0] == 1) {
            cout << "1\n";
            return;
        }
        else if(a[n-1] == 1 && a[0] == n) {
            cout << "3\n";
            return;
        }
        else {
            cout << "2\n";
            return;
        }
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