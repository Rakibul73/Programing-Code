
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/03 00:03:43



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int a , b, c;
    cin>>a>>b>>c;
    vector<int> x;
    int i;
    for (i = 1; a*c > i*b ; i++)
    {
        x.push_back(i*b);
    }
    x.push_back(i*b);
    
    int ans = x.size() - c;
    cout<<ans<<"\n";

    
    
    
    return 0;
}