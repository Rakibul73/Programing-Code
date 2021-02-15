
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/15 21:36:41



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
        int n, input;
        cin>>n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            cin>>input;
            a.push_back(input);
        }
        int k = a.size();
        sort(a.begin(), a.end());
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] != a[i+1]) {
                k = i+1;
                break;
            }
        }
        cout<<a.size()-k<<"\n";
        
        
        t--;
    }
    
    return 0;
}