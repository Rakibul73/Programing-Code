
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int t,n;
    cin>>t;
    while (t)
    {
        cin>>n;
        int a,b;
        b = n%2020;
        a = ((n-b) / 2020 ) - b;
        if (a >= 0 && n ==  (2020*(a+b) + b)) {
            cout<<"YES"<<endl;
        }
        else {
             cout<<"NO"<<endl;
        }



        t--;
    }
    
    return 0;
}