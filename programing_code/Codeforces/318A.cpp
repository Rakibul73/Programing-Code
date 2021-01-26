
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    long long n,a,k;
    cin>>n>>k;
    a=ceil((double)n/(double)2);
    if( a >= k) {
        cout<<(k*2)-1<<endl;
    }
    else {
        cout<<(k-a )*2<<endl;
    }
    
    return 0;
}