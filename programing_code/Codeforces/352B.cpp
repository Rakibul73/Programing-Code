
/***
     Bismillahir Rahmanir Rahim
     Read in the name of Allah, who created you.
     Author : Md. Rakibul Islam,
     Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
 ***/

#include <bits/stdc++.h>
using namespace std;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    int n, input;
    cin >> n;
    map<int, vector<int>> a;
    for (int i = 0; i < n; i++) {
        cin >> input;
        a[input].push_back(i);
    }
     
    
    vector<pair<int, int>> b;
    int s=0, d=0, di, bal = 0;
    for(auto &x: a) {
        di = 0;
        bal = 0;
        if(x.second.size() == 1) {
            di = 0;
        }
        else {
            for(int i = 0; i < x.second.size()-1; i++) {
            
                if (i == 0)
                {
                    di = abs(x.second[i] - x.second[i+1]);
                    continue;
                }
                if (di != abs(x.second[i] - x.second[i+1]))
                {
                    bal =1;
                    break;
                }
            }
        }
        if(bal == 0) {
            b.push_back( make_pair( x.first ,di ) );
        }
    }
    cout<<b.size()<<"\n";
    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i].first<<" "<<b[i].second<<"\n";
    }
    
    

    return 0;
}