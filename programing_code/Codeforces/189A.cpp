
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/07 09:39:49



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n, a,b,c;
    cin>>n>>a>>b>>c;
    int ans = 0;
    for (int i = 0; i <= 4000; i++)
    {
        for (int j = 0; j <= 4000; j++)
        {
            int kc = n - ((i*a) + (j*b));
            if(kc < 0) {
                break;
            }
            double k = (kc/ (double)c);
            if(k == (int)k) {
                ans = max(ans , (int)k+i+j);
            }
            
        }
        
    }
    cout<<ans<<"\n";
    
    return 0;
}