
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/02 18:19:48



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n;
    long long tk = 0, x = 0, y = 0, z = 0;
    bool ttk = true;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        int t = a[i];
        if(a[i] == 25) {
            x = x + 25;
        }
        else if( a[i] == 50) {
            if(25 <= x) {
                x = x - 25;
                y = y + 50;
            }
            else {
                ttk = false;
            }
        }
        else {
            if(( y >= 50 && x >= 25)) {
                y = y - 50;
                x = x - 25;
                z = z + 100;
            }
            else if ( x >= 75) {
                x = x - 75;
            }
            else {
                ttk = false;
            }
        }
    }
    if(ttk) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
    return 0;
}