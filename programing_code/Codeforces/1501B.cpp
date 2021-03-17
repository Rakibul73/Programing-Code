
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/16 13:50:36



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
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int b[n] = {0};
        int temp = a[n-1];
        for (int i = n - 1; i >= 0; i--)
        {
            if(a[i] != 0 || temp != 0) {
                temp = max(a[i], temp);
                b[i] = 1;
                temp--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<"\n";

        t--;
    }
    
    
    return 0;
}