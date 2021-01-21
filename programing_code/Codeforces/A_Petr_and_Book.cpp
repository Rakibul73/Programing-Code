
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n,a=0,i, arr[7];
    cin>>n;
    for( i = 0; i<7; i++) {
        cin>>arr[i];
    }
    for( i = 0; i<7; i++) {
        a=a+arr[i];
        if(a>=n) {

            break;
        }
        if (i==6) {
            i=-1;
        }
        
    }
    cout<<i+1<<endl;
    return 0;
}