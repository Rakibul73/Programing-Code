#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n,a=0,b=0,c=0,d=0,p=0, x[1000], y[1000];
    cin>>n;
    for(int i = 0; i<n; i++) {    
        cin>>x[i]>>y[i];
    }
    for(int i = 0; i<n; i++) { 
        a=0;
        b=0;
        c=0;          
        d=0;   
        for(int j = 0; j<n; j++) { 
            if(i ==j) {
                continue;
            }   
            if(x[j]>x[i] && y[j]==y[i]) {
                a++;
            }
            else if(x[j]<x[i] && y[j]==y[i]) {
                b++;
            }
            else if(x[j]==x[i] && y[j]<y[i]) {
                c++;
            }
            else if(x[j]==x[i] && y[j]>y[i]) {
                d++;
            }
            if(a!=0 && b!=0 && c!=0 && d!=0) {
                p++;
                break;
            }
        }
    }
    cout<<p<<endl;
    return 0;
}