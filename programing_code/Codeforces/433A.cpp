
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/15 14:49:44

#include <bits/stdc++.h>
using namespace std;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    int n, input;
    map<int, int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        a[input]++;
    }
    int p = 1;
    if (a.size() == 1) {
        for(auto const & x: a) {
            if(x.second % 2 == 0) {
                p = 0;
            }
        }
        if (p == 0)
        {
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
    }
    else if (a[100] % 2 == 0 && a[200] % 2 == 0) {
        cout<<"YES"<<"\n";
    }
    else if (a[100] == a[200] + 1) {
        cout<<"YES"<<"\n";
    }
    else if (a[100] % 2 == 0 && a[200] % 2 != 0) {
        cout<<"YES"<<"\n";
    }
    
    else {
        cout<<"NO"<<"\n";
    }

    return 0;
}