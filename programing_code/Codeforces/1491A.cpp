
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/01 12:50:44



#include <bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n, q, x, k = 0, t;
    cin>>n>>q;
    vector<int>a(n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i] == 1) {
            k++;
        }
    }

    for (int i = 0; i < q; i++)
    {
        cin>>t>>x;
        if(t == 1) {
            if(a[x-1] == 1) {
                a[x-1] = 0;
                k--;
            }
            else {
                a[x-1] = 1;
                k++;
            }
        }
        else {
            if(k >= x) {
                cout<<"1"<<"\n";
            }
            else {
                cout<<"0"<<"\n";
            }
        }
    }
    
    
    
    return 0;
}