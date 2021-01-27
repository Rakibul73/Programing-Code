
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n, i , j , k;
    cin>>n;

    for (i = 0; i <= n; i++) {
        
        for (j = i; j < n; j++ ) {
            cout<<"  ";
        }
        for (k = 0; k <= i; k++ ) {
            if ( i == 0) {
                cout<<k;
            }
            else {
                cout<<k<<" ";
            }
            
        }
        for (j= k-2; j >=0; j-- ) {
            if(j == 0) {
                cout<<j;
            }
            else {
                cout<<j<<" ";
            }
            
        }
        cout<<endl;
    }

    for (i = 1; i <= n; i++ ) {
        for (j= i ;  j > 0; j-- ) {
            cout<<"  ";
        }
        for( k = j;  k <= n-i; k++ ) {
            if ( n-i ==0) {
                cout<<k;
            }
            else {
                cout<<k<<" ";
            }
            
        }
        for ( j =k-2; j >= 0 ; j--) {
            if (j==0) {
                cout<<j;
            }
            else {
                cout<<j<<" ";
            }
        }


        cout<<endl;
    }
    
    
    return 0;
}