
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t)
    {
        long long n,k;
        cin>>n>>k;
        long long i,sum;
        if ( n <= k) {
            for (i = 1; i<100 ; i++) {
                sum = n*i;
                if(sum >= k) {
                    break;
                }
            }
            cout<<i<<endl;
        }
        else {
            long long sum=n,i=1;
            for(long long j = 0 ; j <= n; j++  ) {
                if( j!=0) {
                    sum = sum + 1;
                }
                if(j == n){
                    j=0;
                }
                if( j== 1) {
                    i++;
                }
                if(sum%k == 0) {
                    break;
                }
                
            }
            cout<<i<<endl;
        }







        t--;
    }
    
    return 0;
}