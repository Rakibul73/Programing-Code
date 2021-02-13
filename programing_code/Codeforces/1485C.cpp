
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/13 13:28:28



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
        long long x, y;
        cin>>x>>y;
        long long count = 0;
        
        for (long long i = 1; i*i < x; i++)
        {
            count = count + max((long long)0,min(y,x/i-1)-i);
        }
        
        cout<<count<<"\n";



        t--;
    }
    return 0;
}