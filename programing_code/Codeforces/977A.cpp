
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    int k;
    long long n;
    cin>>n>>k;
    while(k) {
        if (n%10 == 0)
        {
            n=n/10;
        }
        else {
            n--;
        }
        

        k--;
    }
    cout<<n<<"\n";
    return 0;
}