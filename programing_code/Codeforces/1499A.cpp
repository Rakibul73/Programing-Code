
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/18 21:09:18



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
        int n , k1 , k2;
        cin>>n>>k1>>k2;
        int w ,b;
        cin>>w>>b;
        int white = k1+k2;
        int black = (n*2) - white;
        if(w*2 <= white && b*2 <= black) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }

        t--;
    }

    
    return 0;
}