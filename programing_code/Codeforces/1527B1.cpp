
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/05/31 13:48:50



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int ispalindrome(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string r = string(s.rbegin(), s.rend());
    if(r == s){
        return 1;
    }
    else {
        return 0;
    }
}

void solve() {
    int n, zero = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0') {
            zero++;
        }
    }
    if(zero == 1) {
        cout << "BOB\n";
    }
    else if(zero % 2 > 0) {
        cout << "ALICE\n";
    }
    else {
        cout << "BOB\n";
    }
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