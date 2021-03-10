
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/10 16:43:18



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n , m;
    cin>>n>>m;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    unordered_set <int> ss;
    for (int i = n - 1; i >= 0; i--)
    {
        if(ss.find(a[i]) == ss.end()) {
            ss.insert(a[i]);
        }
        b[i] = ss.size();
    }
    
    for (int i = 0; i < m; i++)
    {
        int l;
        cin>>l;
        
        int ans = b[l-1];
        cout<<ans<<"\n";
    }
    
    
    
    return 0;
}