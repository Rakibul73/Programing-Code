
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/13 13:34:17



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
        long long count = 0;
        while (a != 0)
        {
            if (a > b)
            {
                b = b+1;
                count++;
                a = a/b;
                count++;
            }
            else if (a == b)
            {
                b = b+1;
                count++;
            }
            else {
                a = a/b;
                count++;
            }
        }
        cout<<count<<"\n";
        t--;
    }
    
    return 0;
}