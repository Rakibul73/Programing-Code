#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int j=0;
    cin>>s;
    for (int i =0; i< s.length(); i++) {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9') {
            j=1;
            break;
        }
    }

    if (j==1) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;

}

