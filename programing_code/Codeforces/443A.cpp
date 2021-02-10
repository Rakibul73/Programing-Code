
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

#include <bits/stdc++.h>
using namespace std;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    string s, a;

    getline(cin, s);
    int n = s.size();
    if (n == 2)
    {
        cout<<"0"<<"\n";
    }
    else if (n == 3)
    {
        cout<<"1"<<"\n";
    }
    else {
        sort(s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
        n = s.size();
        cout<<n-4<<"\n";
    }
    
    return 0;
}