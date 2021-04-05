
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/04/02 14:05:48



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    long long a;
    cin>>a;
    int bal = a;
    while(bal / 10 != 0) {
        a = bal;
        bal = 0;
        while (a)
        {
            bal = bal + (a % 10);
            a = a / 10;
        }
    }
    cout<<bal<<endl;
    
    return 0;
}