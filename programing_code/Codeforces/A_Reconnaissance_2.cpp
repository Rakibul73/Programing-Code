#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a;
    int n,x,y=0,dif=2000,input=0;
    cin>>n;
    a.resize(n);
    for(int i = 0; i<n; i++) {
        cin>>a[i];
    }
    for(int i = 0;i<n;i++) {
        if(i==n-1) {
            x= (a[0]<a[i]) ? a[i]-a[0] : a[0]-a[i];
        }
        else {
            x= (a[i]<a[i+1]) ? a[i+1]-a[i] : a[i]-a[i+1];
        }
        if(dif >= x) {
            y=i;
            dif=x;
        }
    }
    if (y==n-1) {
        cout<<"1 "<<y+1<<endl;
    }
    else {
        cout<<y+1<<" "<<y+2<<endl;
    }
    
    return 0;
}