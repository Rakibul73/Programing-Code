
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/13 13:59:07



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    string s, ans;
    cin>>s;
    int h = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1]) {
            h++;
        }
        else {
            cout<<s[i-1]<<h;
            h=1;
        }
    }
    int i = s.size() - 1;
    if(s[i] == s[i-1]) {
        
        cout<<s[i-1]<<h;
    }
    else {
        cout<<s[i]<<"1";
    }
    
    return 0;
}