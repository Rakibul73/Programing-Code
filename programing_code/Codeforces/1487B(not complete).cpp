
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/15 22:52:43



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
        long long n, k, ans;
        cin>>n>>k;
        if (n %2 == 0)
        {
            if (n < k)
            {
                ans = n % k;
            }
            else {
                ans = k;
            }
            
        }
        else {
            
        }
        cout<<ans<<"\n";

        t--;
    }
    
    return 0;
}