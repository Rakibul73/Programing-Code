
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/13 14:50:56



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n , m , k;
    cin>>n>>m>>k;
    int l = ((n * 7) + 9) / 10 ;
    int ans1 = max(0 , l - k);
    int ans2 = (((n-m) + k) / (double)n) * 100;
    
    if(ans1 <= n-m) {
        cout<<ans1<<"\n";
    }
    else {
        cout<<"-1"<<"\n";
    }
    
    cout<<ans2<<"\n";
    return 0;
}