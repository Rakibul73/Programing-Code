
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/13 13:27:25



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n;
    cin>>n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long count = 0;
    while (n)
    {
        n = (n/2) ;
        count++;
    }
    cout<<count<<"\n";
    
    
    return 0;
}