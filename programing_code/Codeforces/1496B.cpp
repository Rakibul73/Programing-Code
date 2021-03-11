
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/11 19:01:38



#include <bits/stdc++.h>

using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int mex (set<long long> a, int n) {
    int i;
    for ( i = 0; i < n; i++)
    {
        if(a.find(i) == a.end()) {
            break;
        }
    }
    return i;
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        int n;
        long long k, x, y, put , ans;
        cin>>n>>k;
        set<long long> a;
        for (int i = 0; i < n; i++)
        {
            long long input;
            cin>>input;
            a.insert(input);
        }
        int temp_max = *a.rbegin() ;
        int temp_x = mex(a, a.size());
        if(temp_x < temp_max && k != 0) {
            x = temp_x;
            y = temp_max;
            put = ceil((double)(x+y)/2.0);
            a.insert(put);
            ans = a.size();
        }
        else if (temp_x < temp_max && k == 0) {
            ans = a.size();
        }
        else {
            ans = a.size() + k;
        }
        
        cout<<ans<<"\n";
        t--;
    }
    return 0;
}