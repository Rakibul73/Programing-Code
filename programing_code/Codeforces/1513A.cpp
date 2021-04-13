
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/04/13 22:30:00



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n, k;
    cin >> n >> k;
    if(n%2 == 0) {
        if((n/2) - 1 >= k) {
            int i = n;
            int cpy = (n / 2) - 1;
            while (k)
            {
                cout << n - 1 << " " << n << " ";
                n = n - 2;
                k--;
            }
            // baki number
            for (int i = n; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << "\n";
            return;
        }
        else {
            cout << "-1\n";
            return;
        }
    }
    else {
        if(((n+1)/2) - 1 >= k) {
            int i = n;
            int cpy = ((n+1) / 2) - 1;
            while (k)
            {
                cout << n - 1 << " " << n << " ";
                n = n - 2;
                k--;
            }
            // baki num
            for (int i = n; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << "\n";
            return;
        }
        else {
            cout << "-1\n";
            return;
        }
    }
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin >> t;
    while (t)
    {
        solve();

        t--;
    }
    

    return 0;
}