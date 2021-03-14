
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/14 21:19:00



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        int n;
        cin>>n;
        vector<int>a (n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i]>>b[i];
        }
        vector<int> tm(n);
        for (int i = 0; i < n; i++)
        {
            cin>>tm[i];
        }
        int ans = 0;
        ans = ans + a[0] + tm[0];
        if(n != 1) {
            ans = ans + ceil((b[0] - a[0]) / 2.0);
            ans = max(ans , b[0]);
        }
        for (int i = 1; i < n-1; i++)
        {
            ans = ans + (a[i] - b[i-1]) + tm[i];
            ans = ans + ceil((b[i] - a[i]) / 2.0);
            ans = max(ans , b[i]);

        }
        if(n != 1) {
            ans = ans + (a[n-1] - b[n-2]) + tm[n-1];
        }

        cout<<ans<<"\n";
        

        t--;
    }
    
    
    return 0;
}