
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int k,a[12],sum=0,mm=0, count=0;
    cin>>k;
    for (int i = 0; i < 12; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    if(k==0) {
        cout<<"0"<<endl;
    }
    else if(sum<k) {
        cout<<"-1"<<endl;
    }
    else {
        int n = sizeof(a)/sizeof(a[0]);
        sort(a, a+n);
        for (int i = 11; i >=0; i--)
        {
            mm = mm+a[i];
            count++;
            if (mm >= k) {
                break;
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}