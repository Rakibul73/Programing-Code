
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/13 14:27:19



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
        long long a, b;
        cin>>a>>b;
        long long count = 0, f = 1e18;
        for (long long i = 0; i*i <= a; i++)
        {
            if (i == 0 && b == 1)
            {
                continue;
            }
            count = i;
            long long temp = a;
            while (temp != 0)
            {
                temp = temp/(b+i);
                count++;
            }
            f = min(count, f);
        }
        cout<<f<<"\n";
        t--;
    }
    
    return 0;
}