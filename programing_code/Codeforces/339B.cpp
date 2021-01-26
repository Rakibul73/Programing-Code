
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    vector<int> work;
    long long  n , m,input,t=0;
    cin>>n>>m;
    work.push_back(1);
    for(int i = 1; i<=m; i++) {
        cin>>input;
        work.push_back(input);
    }
    for(int i = 1; i<=m; i++) {
        if(work[i-1] > work[i] ) {
            t=t+ (n-work[i-1]+work[i]);
        }
        else {
            t=t+(work[i]-work[i-1]);
        }
    }
    cout<<t<<endl;

    return 0;
}