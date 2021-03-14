
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/14 23:28:34



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
long long MOD = 1000000007;
int main() {
    // Below function is A fast IO program
    fast_cin();
    long long x, y;
    cin>>x>>y;
    long long n;
    cin>>n;
    int l = n % 6;
    if(l == 1) {
        cout<<((x%MOD)+MOD)%MOD<<"\n";
    }
    else if(l == 2) {
        cout<<((y%MOD)+MOD)%MOD<<"\n";
    }
    else if(l == 3) {
        cout<<(((y-x)%MOD)+MOD)%MOD<<"\n";
    }
    else if(l == 4) {
        cout<<((-x%MOD)+MOD)%MOD<<"\n";
    }
    else if(l == 5) {
        cout<<((-y%MOD)+MOD)%MOD<<"\n";
    }
    else if(l == 0) {
        cout<<(((x-y)%MOD)+MOD)%MOD<<"\n";
    }
    
    return 0;
}