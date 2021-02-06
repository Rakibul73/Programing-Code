
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int a, b, n, m, count=0;
    cin>>n>>m;
    int x = n<m ? n : m;
    for(a=0; a<=x; a++) {
        for(b=0; b<=x; b++) {
            if(((a*a)+b == n) && (a+(b*b) == m)) {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}