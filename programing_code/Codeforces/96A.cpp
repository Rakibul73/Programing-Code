
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int i,m=1;
    string ara;
    cin>>ara;

    for (i=0; i<ara.length(); i++) {
        if(ara[i+1] != ara[i]) {
            m=1;
        }
        if(ara[i+1] == ara[i]) {
            m++;
        }
        if(m==7) {
            break;
        }
    }
    if(m<7) {
        printf("NO\n");
    }
    else
        printf("YES\n");
    return 0;
}