
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/03 13:48:54



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
        char ff = a[0] , ll = a[a.size()-1];
        bool yoo = true;
        int i;
        if(ff == ll) {
            yoo = false;
        }
        else {
            vector<int>g;
            for (int i = 0; i < a.size(); i++)
            {
                if(ff == a[i]) {
                    g.push_back(1);
                }
                else if(ll == a[i]) {
                    g.push_back(-1);
                }
                else {
                    g.push_back(1);
                }
            }
            int sum = 0;
            for (int i = 0; i < g.size(); i++)
            {
                sum = sum + g[i];
                if(sum < 0) {
                    break;
                }
            }
            //=================================================
            g.clear();
            for (int i = 0; i < a.size(); i++)
            {
                if(ff == a[i]) {
                    g.push_back(1);
                }
                else if(ll == a[i]) {
                    g.push_back(-1);
                }
                else {
                    g.push_back(-1);
                }
            }
            int sum2 = 0;
            for (int i = 0; i < g.size(); i++)
            {
                sum2 = sum2 + g[i];
                if(sum2 < 0) {
                    break;
                }
            }

            if(sum == 0 || sum2 == 0) {
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