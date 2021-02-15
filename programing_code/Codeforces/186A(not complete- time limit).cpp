
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/15 16:54:42



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    string s1, s2;
    int p = 0;
    cin>>s1;
    cin>>s2;
    if (s1.size() != s2.size()) {
        cout<<"NO"<<"\n";
    }
    else {
        for (int i = 0; i < s1.size(); i++)
        {
            char temp = s1[i];
            for (int j = i+1; j < s1.size(); j++)
            {
                s1[i] = s1[j];
                s1[j] = temp;
                if (s1 == s2) {
                    p = 1;
                    break;
                }
                s1[j] = s1[i];
                s1[i] = temp;
            }
            if ( p == 1) {
                break;
            }
        }
        if ( p == 1) {
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}