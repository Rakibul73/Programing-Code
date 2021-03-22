
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/22 13:57:42



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve() {
    int n;
    cin>>n;
    vector<long long> a(n), b;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(n <= 2) {
        cout<<"0\n";
        return;
    }
    else if(is_sorted(a.begin(), a.end())) {
        long long kl = a[1] - a[0];
        for (int i = 1; i < n-1; i++)
        {
            if( a[i+1] - a[i] != kl ) {
                cout<<"-1\n";
                return;
            }
        }
        cout<<"0\n";
        return;
    }
    else {
        b = a;
        reverse(b.begin(), b.end());
        if(is_sorted(b.begin(), b.end())) {
            long long kl = b[1] - b[0];
            for (int i = 1; i < n-1; i++)
            {
                if( b[i+1] - b[i] != kl ) {
                    cout<<"-1\n";
                    return;
                }
            }
            cout<<"0\n";
            return;
        }
        else {
            b.clear();
            long long c, m;
            for (int i = 1; i < n-1; i++)
            {
                if(a[i-1] < a[i] && a[i] > a[i+1]) {
                    c = a[i] - a[i-1];
                    m = (a[i] + c) - a[i+1];
                    break;
                }
                if(a[i-1] > a[i] && a[i] < a[i+1]) {
                    c = a[i+1] - a[i];
                    m = (a[i-1] + c) - a[i];
                    break;
                }
            }
            
            for (int i = 0; i < n-1; i++)
            {
                if((a[i] + c) % m != a[i+1]) {
                    cout<<"-1\n";
                    return;
                }
            }
            if(m == 0 || m <= a[0]) {
                cout<<"-1\n";
                return;
            }
            cout<<m<<" "<<c<<"\n";
            return;
            
        }
    }
    return;

}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        solve();
        
        t--;
    }
    
    
    return 0;
}