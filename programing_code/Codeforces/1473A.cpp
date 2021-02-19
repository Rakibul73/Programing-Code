
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/19 20:47:42



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
        int n, d, boro = 0;
        cin>>n>>d;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] > d) {
                boro = 1;
            }
        }
        sort(a.begin(), a.end());
        if(boro == 0) {
            cout<<"YES"<<"\n";
        }
        else if(a[0]+a[1] <= d) {
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
        
        t--;
    }
    
    
    return 0;
}