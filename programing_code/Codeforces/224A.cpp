
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int x, y, z;
    x=sqrt((a*c)/b);    
    y=sqrt((a*b)/c);    
    z=sqrt((b*c)/a);
    cout<<(x+y+z)*4<<endl;  
    return 0;
}