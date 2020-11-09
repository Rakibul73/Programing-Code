#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,sum,s;
    int A[100];
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>A[i];
    }
    s=sizeof(A)/sizeof(A[0]);
    sort(A, A+s);
    for(i=0; i<n; i++) {
        cout<<A[i];
    }
    /*for(i=0; i<n; i++) {
        sum+=A[i];
    }
    if(sum%2==0) {
        cout<<sum/2<<endl;
    }
    else {

    }*/



}
