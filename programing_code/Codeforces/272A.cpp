
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a, x=0,y=0;;
    cin>>n;
    for(int i = 0; i<n; i++) {
        cin>>a;
        x= x+a;
    }
    n++;
    for (int i = 1; i<=5; i++) {
        if(   (x+i)  %  n   !=   1   ) {
            y++;
        }
    }

    cout<<y<<endl;


}
