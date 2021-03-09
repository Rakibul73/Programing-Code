
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/08 19:54:58



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n; 
    unsigned long long v_all_sum = 0;
    cin>>n;
    vector<long long> v(n), u;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        v_all_sum = v_all_sum + v[i];
    }
    u = v;
    sort(u.begin(), u.end());
    unsigned long long u_all_sum = v_all_sum;
    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int type , l ,r;
        cin>>type>>l>>r;
        if(type == 1) {
            if ((r-l+1) > (n - (r-l+1))) {
                unsigned long long sum = 0;
                for (int i = 0; i < l-1; i++)
                {
                    sum = sum + v[i];
                }
                for (int i = r; i < n; i++)
                {
                    sum = sum + v[i];
                }
                unsigned long long ans = v_all_sum - sum;
                cout<<ans<<"\n";
            }
            else {
                unsigned long long sum = 0;
                for (int i = l-1; i < r; i++)
                {
                    sum = sum + v[i];
                }
                cout<<sum<<"\n";
            }
        }
        else {
            if (r-l+1 > n - (r-l+1)) {
                unsigned long long sum = 0;
                for (int i = 0; i < l-1; i++)
                {
                    sum = sum + u[i];
                }
                for (int i = r; i < n; i++)
                {
                    sum = sum + u[i];
                }
                unsigned long long ans = u_all_sum - sum;
                cout<<ans<<"\n";
            }
            else {
                unsigned long long sum = 0;
                for (int i = l-1; i < r; i++)
                {
                    sum = sum + u[i];
                }
                cout<<sum<<"\n";
            }
        }
    }
    
    
    return 0;
}