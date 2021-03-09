
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/08 18:37:58



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    long long n;
    cin>>n;
    vector<int> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    long long codex = 0;
    for (long long i = 0; i < n; i++)
    {
        if (a[i] < i+1) {
            codex = codex + ((i+1) - a[i]);
        }
        else if (a[i] > i+1) {
            codex = codex + (a[i] - (i+1));
        }
    }
    cout<<codex<<"\n";
    

    
    return 0;
}