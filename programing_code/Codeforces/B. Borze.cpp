#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string a, b;
    cin>>a;
    int j= 0;
    for (int i=0; i< a.length(); i++ ) {
        if( a[i] == '.' ) {
            b+='0';
        }
        if(a[i]=='-' && a[i+1]=='.') {
            b+='1';
            i++;
        }
        if(a[i]=='-' && a[i+1]=='-') {
            b+='2';
            i++;
        }

    }
    cout<<b<<endl;

    return 0;

}
