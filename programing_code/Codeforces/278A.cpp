
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/28 11:53:42



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int s, t;
    cin>>s>>t;
    if(s > t) {
        int temp = s;
        s = t;
        t = temp;
    }
    int cpy = 0, codex = 0;
    for (int i = s-1; i < t-1; i++)
    {
        cpy = cpy + arr[i];
    }
    for (int i = t-1; i < n; i++)
    {
        codex = codex + arr[i];
    }
    for (int i = 0; i < s-1; i++)
    {
        codex = codex + arr[i];
    }
    
    cout<<min(cpy , codex)<<"\n";

    
    return 0;
}