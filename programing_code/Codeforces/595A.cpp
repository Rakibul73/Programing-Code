
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/20 15:31:34



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n , m, count = 0;
    cin>>n>>m;
    vector<int> a(n*m) , b(n*m);
    for (int i = 0; i < n*m; i++)
    {
        cin>>a[i]>>b[i];
        if(a[i] == 0 && b[i] == 0) {
            count++;
        }
    }
    cout<<(n*m) - count<<"\n";
    
    return 0;
}