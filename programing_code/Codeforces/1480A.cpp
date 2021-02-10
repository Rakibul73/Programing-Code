
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        string s;
        cin>>s;
        int x = s.size();
        for (int i = 0; i < x; i++)
        {
            if(i % 2 == 0) {
                if(s[i] == 'a') {
                    s[i] = 'b';
                }
                else {
                    s[i] = 'a';
                }
            }
            else {
                if(s[i] == 'z') {
                    s[i] = 'y';
                }
                else {
                    s[i] = 'z';
                }
            }
        }
        cout<<s<<"\n";



        t--;
    }
    
    return 0;
}