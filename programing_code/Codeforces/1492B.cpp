
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/24 12:52:44



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
        int n, big = -1,index, index1;
        cin>>n;
        vector<int> p(n), q;
        for (int i = 0; i < n; i++)
        {
            cin>>p[i];
            if(big < p[i]) {
                big = p[i];
                q.push_back(i);
            }
        }
        reverse(q.begin(), q.end());
        int r=n;
        for(auto x: q){
            for(int i = x; i < r; i++){
                cout<<p[i]<<" ";
            }
            r=x;
        }




        cout<<"\n";
        t--;
    }
    
    
    return 0;
}