
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/21 14:12:18



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
    for (int j = 0; j < k; j++)
    {
        jog = jog + h[j]; 
    }
    sum = jog;
    ans = 0;
    for (int i = k; i < n; i++)
    {
        jog = jog+h[i]-h[i-k];
        if(sum > jog) {
            sum = jog;
            ans = i-k+1;
        }
    }
    cout<<ans + 1<<"\n";
    
    
    
    return 0;
}