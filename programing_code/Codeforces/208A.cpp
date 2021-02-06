
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    string remix;
    cin>>remix;
    int n = remix.length();
    for(int i = 0; i<n ; i++) {
        if (remix[i] == 'W' && remix[i+1] == 'U' && remix[i+2] == 'B') {
            cout<<" ";
            i=i+2;
        }
        else {
            cout<<remix[i];
        }
    }    
    return 0;
}