
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/04/24 16:34:53



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n, count = 0;
    cin >> n;
    while(n >= 2050000000000000000) {
        n = n - 2050000000000000000;
        count++;
    }
    while(n >= 205000000000000000) {
        n = n - 205000000000000000;
        count++;
    }
    while(n >= 20500000000000000) {
        n = n - 20500000000000000;
        count++;
    }
    while(n >= 2050000000000000) {
        n = n - 2050000000000000;
        count++;
    }
    while(n >= 205000000000000) {
        n = n - 205000000000000;
        count++;
    }
    while(n >= 20500000000000) {
        n = n - 20500000000000;
        count++;
    }
    while(n >= 2050000000000) {
        n = n - 2050000000000;
        count++;
    }
    while(n >= 205000000000) {
        n = n - 205000000000;
        count++;
    }
    while(n >= 20500000000) {
        n = n - 20500000000;
        count++;
    }
    while(n >= 2050000000) {
        n = n - 2050000000;
        count++;
    }
    while(n >= 205000000) {
        n = n - 205000000;
        count++;
    }
    while(n >= 20500000) {
        n = n - 20500000;
        count++;
    }
    while(n >= 2050000) {
        n = n - 2050000;
        count++;
    }
    while(n >= 205000) {
        n = n - 205000;
        count++;
    }
    while(n >= 20500) {
        n = n - 20500;
        count++;
    }
    while(n >= 2050) {
        n = n - 2050;
        count++;
    }
    while ( n != 0) {
        cout << "-1\n";
        return;
    }

    cout << count << "\n";
    return;
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