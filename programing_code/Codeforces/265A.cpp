
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/25 13:10:04



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    string s, t;
    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < t.size(); ++i)
    {
        if (t[i] == s[ans])
        {
            ans += 1;
        }
    }
    cout << ans + 1 << endl;
    
    return 0;
}