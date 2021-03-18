
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/18 18:22:32



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
        long long n , k;
        cin>>n>>k;

        if(n%2 == 0) {
            if(n%4 == 0) {
                cout<<n/2<<" "<<(n/2)/2<<" "<<(n/2)/2<<"\n";
            }
            else {
                cout<<"2 "<<(n-2)/2<<" "<<(n-2)/2<<"\n";
            }
        }
        else {
            cout<<"1 "<<(n-1)/2<<" "<<(n-1)/2<<"\n";
        }

        t--;
    }
    
    return 0;
}