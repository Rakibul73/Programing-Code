
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/10 19:28:25



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
        int n ,k ;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n%2 == 0) {
            if(k == 0) {
                cout<<"YES\n";
            }
            else if (n/2 == k) {
                cout<<"NO\n";
            }
            else {
                bool ff = true;
                int bam = 0, dan = s.size()-1;
                while (k)
                {
                    if(s[bam] != s[dan]) {
                        ff = false;
                        break;
                    }
                    bam++;
                    dan--;
                    k--;
                }
                
                if(ff) {
                    cout<<"YES\n";
                }
                else {
                    cout<<"NO\n";
                }
            }
        }
        else {
            
            bool ff = true;
            int bam = 0, dan = s.size()-1;
            while (k)
            {
                if(s[bam] != s[dan]) {
                    ff = false;
                    break;
                }
                bam++;
                dan--;
                k--;
            }
            if(ff) {
                cout<<"YES\n";
            }
            else {
                cout<<"NO\n";
            }
            
        }


        t--;
    }
    
    
    return 0;
}