
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int t,n,input, one=0, two=0;
    cin>>t;
    while (t) {
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>input;
            if(input == 1) {
                one++;
            }
            else {
                two++;
            }

        }
        if(one  > 0  && two > 0) {
            if(( (one*1) %2 == 0) && ((two*2) %2 == 0)) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
        else if (one > 0 && two ==0) {
            if( one %2 == 0) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }    
        else if (two > 0 && one ==0) {
            if( two %2 == 0) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }    




        one=0, two=0;
        t--;
    }
    
    return 0;
}