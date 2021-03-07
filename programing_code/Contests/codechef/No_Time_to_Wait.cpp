
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/06 13:09:07



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int N,x,H;
    cin>>N>>H>>x;
    vector<int> T(N);
    for (int i = 0; i < N; i++)
    {
        cin>>T[i];
    }
    sort(T.begin(), T.end());
    if(H-x <= T[N-1]) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
    
    
    
    return 0;
}