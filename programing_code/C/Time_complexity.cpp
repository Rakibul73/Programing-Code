#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, l;
    my:
    cin>>n;
    l=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            l=l+1;
        }
    }
    cout<<n<<"  " << l<<endl;
    goto my;
}
