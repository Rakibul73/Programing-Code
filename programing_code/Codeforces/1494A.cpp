
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/03 00:49:41



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
        string a;
        cin>>a;
        char ff = a[0] , l = 'F', ll = a[a.size()-1], f = 'U';
        int first = 0, last = 0;
        bool yoo = true;
        int i;
        if(ff == ll) {
            yoo = false;
        }
        else {
            for (i = 1; i < a.size(); i++)
            {
                if(ff == a[i]) {
                    continue;
                }
                if(ll == a[i]) {
                    continue;
                }
                else if( ff != a[i] && ll != a[i]) {
                    f = a[i];
                    break;
                }
                else if( ff != a[i] && ll == a[i]) {
                    continue;
                }
                else if( ff != a[i] && l != a[i]) {
                    f = a[i];
                    break;
                }
            }
            vector<int>g;
            for (int i = 0; i < a.size(); i++)
            {
                if(ff == a[i]) {
                    g.push_back(1);
                }
                if(f == a[i]) {
                    g.push_back(1);
                }
                if(ll == a[i]) {
                    g.push_back(-1);
                }
                if(l == a[i]) {
                    g.push_back(-1);
                }
            }
            int sum = 0;
            for (int i = 0; i < g.size(); i++)
            {
                sum = sum + g[i];
            }
            if(sum == 0) {
                yoo = true;
            }
            else {
                yoo = false;
            }

        }
        
        
        if(yoo) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
        
        t--;
    }
    
    
    return 0;
}