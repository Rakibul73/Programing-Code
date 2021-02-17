
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/17 16:59:19



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
        long long x, ans = 0;
        cin>>x;
        if (x == 1) {
            cout<<"NO"<<"\n";
        }
        else {
            for (long long i = 1; i*i*i < x; i++)
            {
                long long a = x - (i*i*i);
                long long s = cbrt(a);
                if (s*s*s == a) {
                    ans = 1;
                    break;
                }
            }
            
            
            if (ans == 1)
            {
                cout<<"YES"<<"\n";
            }
            else {
                cout<<"NO"<<"\n";
            }
        }
        
        
        

        t--;
    }
    
    return 0;
}