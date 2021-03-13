
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/12 20:37:13



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    string s;
    cin>>s;
    int k = 0;
    bool ff = true;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A') {
            k++;
        }
        if(s[i] == 'B') {
            k--;
        }
        if(k < 0) {
            ff = false;
            break;
        }
    }
    if(ff && k == 0) {
        cout<<"Sim\n";
    }
    else {
        cout<<"Nao\n";
    }
    
    
    return 0;
}