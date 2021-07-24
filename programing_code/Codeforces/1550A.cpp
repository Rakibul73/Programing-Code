
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/07/15 13:40:22



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int s, tt = 2, count = 0, bijor = 3;
    cin >> s;

    int arr[5001];
    arr[1] = 1;
    for (int i = 2; i < 5001; i++)
    {
        arr[i] = tt;
        count++;
        if(count == bijor) {
            bijor = bijor + 2;
            count = 0;
            tt++;
        }
    }

    cout << arr[s] << "\n";
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