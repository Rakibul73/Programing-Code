
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/18 13:07:05



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    string a;
    cin>>a;
    int count = 0, n = a.size(), one = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == '1') {
            one++;
        }
        if(a[i] == '0' && count == 0) {
            count++;
            continue;
        }
        if(one == n && count == 0) {
            break;
        }
        cout<<a[i];
    }

    cout<<"\n";
    
    return 0;
}