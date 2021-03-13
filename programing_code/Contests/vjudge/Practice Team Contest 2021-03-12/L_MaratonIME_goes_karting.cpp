
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/13 14:18:45



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int N, ans;
    cin>>N;
    vector<long long> h(N);
    long long mi = -1;
    for (int i = 0; i < N; i++)
    {
        cin>>h[i];
        if(mi < h[i]) {
            mi = h[i];
            ans = i + 1;
        }
    }
    sort(h.begin(), h.end());
    if(h[h.size()-1] == h[h.size()-2]) {
        cout<<"-1\n";
    }
    else {
        cout<<ans<<"\n";
    }
    
    return 0;
}