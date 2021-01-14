#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    float a,b,c,d,e,f, n=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(a>0.0) {
        n++;
    }
    if(b>0.0) {
        n++;
    }
    if(c>0.0) {
        n++;
    }
    if(d>0.0) {
        n++;
    }
    if(e>0.0) {
        n++;
    }
    if(f>0.0) {
        n++;
    }
    cout<<n<<" valores positivos"<<endl;
    return 0;
}
