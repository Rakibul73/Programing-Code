
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/16 20:03:09



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    string s1, s2;
    int p,q, k = 0;
    cin>>s1;
    cin>>s2;
    if (s1.size() != s2.size()) {
        cout<<"NO"<<"\n";
    }
    else  {
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i]) {
                k++;
                if( k == 1) {
                    p = i;
                }
                else if( k == 2) {
                    q = i;
                }
                if(k == 3) {
                    break;
                }
            }
        }
        if ( k == 2) {
            char temp = s1[p];
            s1[p] = s1[q];
            s1[q] = temp;
            if (s1 == s2) {
                cout<<"YES"<<"\n";
            }
            else {
                cout<<"NO"<<"\n";
            }
        }
        else {
            cout<<"NO"<<"\n";
        }
        
    }
    return 0;
}