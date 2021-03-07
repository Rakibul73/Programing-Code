
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/07 08:50:28



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve(int a , int b, int c, int n) {
    int ans = 0;
    vector<int> gg = {a, b , c};
    sort(gg.begin(), gg.end());
    if(n % gg[0] == 0) {
        ans = n/gg[0];
        cout<<ans<<"\n";
        return;
    }
    else {
        ans = ans + (n/gg[0]);
        n = n% gg[0];
        while (n < gg[1])
        {
            ans--;
            n = n+ gg[0];
        }
        if(n % gg[1] == 0) {
            ans = ans + (n/gg[1]);
            cout<<ans<<"\n";
            return;
        }
        else {
            ans = ans + (n/gg[1]);
            n = n % gg[0];
            
        }
        

    }
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int n, a,b,c;
    cin>>n>>a>>b>>c;
    solve(a,b,c,n);
    
    return 0;
}