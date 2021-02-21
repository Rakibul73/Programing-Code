
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/20 22:14:02



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int INF = 1000000005; 

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n, k, ans = 0, sum = INF, jog = 0;
    cin>>n>>k;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
    }
    for (int i = 0; i < n-k; i++)
    {
        jog = 0;
        for (int j = i; j < i+k; j++)
        {
            jog = jog + h[j]; 
        }
        if (jog < sum)
        {
            ans= i;
            sum = jog;
        }
    }
    cout<<ans + 1<<"\n";
    
    
    
    return 0;
}