#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, z;
    cin>>y;
    y++;
    for( ; 1==1; y++) {
        if( ((y/1000) ==  ((y%1000)/100)) || (((y%1000)/100) == ((y%100)/10)) || (((y%100)/10) == (y%10) ) || ((y/1000) == ((y%100)/10)) || ((y/1000)== (y%10)) || (((y%1000)/100)== (y%10)) )            {
            continue;
        }
        z=y;
        break;
    }
    cout<<z<<endl;
    return 0;
}
