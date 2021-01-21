
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    string a,b,input;
    int n, x=0,y=0;
    cin>>n;
    for(int i= 1; i<=n; i++) {
        cin>>input;
        if(i==1) {
            a=input;
            x++;

        }
        else if(i > 1 && a != input) {
            b=input;
            y++;
        }
        else if(i > 1 && a == input) {
            a=input;
            x++;
        }
        else if(i > 1 && b == input) {
            b=input;
            y++;
        }

    }

    if (x > y) {
        cout<<a<<endl;
    }
    else {
        cout<<b<<endl;
    }
    return 0;
}