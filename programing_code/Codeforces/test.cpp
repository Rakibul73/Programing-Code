
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/02 17:35:23



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
        if((y - t) >= 0 && a[i] == 100) {
            y = y - 50;
            t = t - 50;
        }
        
        if (x - t >= -25 && a[i] != 25 ) {
            x = x - 25;
            t = t - 25;
        }
        if(a[i] == 25) {
            x = x + 25;
        }
        else if(a[i] == 50) {
            y = y + 50;
        }
        else {
            ttk = false;
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