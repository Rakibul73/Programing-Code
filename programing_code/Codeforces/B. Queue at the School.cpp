#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , t;
    cin>>n>>t;
    char s[n];
    for (int i = 0; i<n; i++) {
        cin>>s[i];
    }
    for (int i= 1; i<=t; i++) {
        for(int j= 0; j< n; ) {
            if(s[j] == 'B' && s[j+1]== 'G') {
                s[j] = 'G';
                s[j+1] = 'B';
                j=j+2;
                continue;
            }
            j++;
        }
    }
    for (int i = 0; i<n; i++) {
        cout<<s[i];
    }
    cout<<endl;

    return 0;
}
