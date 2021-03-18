
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/18 19:29:12



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n;
    cin>>n;
    vector< int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j) {
                continue;
            }
            if(b[i] == a[j]) {
                ans++;
                a[j] = -1;
            }
        }
        if(n <= ans) {
            ans = n;
            break;
        }
    }
    
    cout<<n-ans<<"\n";
    
    
    return 0;
}