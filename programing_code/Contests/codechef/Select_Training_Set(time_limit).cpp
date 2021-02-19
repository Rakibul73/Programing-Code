
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/19 19:35:16



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

vector<pair<string, int>>  cinvecpair(int n) {
    int w;
    string q;
    vector<pair<string,int>> a;
    for (int i = 0; i < n; i++)
    {
        cin>>q>>w;
        a.push_back(make_pair(q,w));
        
    }
    return a;
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int T;
    cin>>T;
    while (T)
    {
        int N;
        cin>>N;
        vector<pair<string, int>> a = cinvecpair(N);
        sort(a.begin(), a.end());
        int one = 0, zero = 0, ans = 0;
        for (int i = 0; i < N; i++)
        {
            if(a[i].first == a[i+1].first && i == 0) {
                if(a[i].second == 1) {
                    one++;
                }
                else {
                    zero++;
                }
            }
            else if(a[i].first != a[i+1].first && i == 0) {
                if(a[i].second == 1) {
                    one++;
                }
                else {
                    zero++;
                }
                ans = zero+one;
                zero = 0, one = 0;
            }
            else if(a[i].first != a[i+1].first && a[i].first != a[i-1].first && i != N-1) {
                if(a[i].second == 1) {
                    one++;
                    ans++;
                }
                else {
                    zero++;
                    ans++;
                }
            }
            else if(a[i].first == a[i+1].first && a[i].first != a[i-1].first && i != N-1) {
                if(a[i].second == 1) {
                    one++;
                }
                else {
                    zero++;
                }
            }
            else if(a[i].first != a[i+1].first && a[i].first == a[i-1].first && i != N-1) {
                if(a[i].second == 1) {
                    one++;
                }
                else {
                    zero++;
                }
                one >= zero? ans = ans + one: ans = ans + zero;
                zero = 0, one = 0;
            }
            else if(a[i].first == a[i+1].first && a[i].first == a[i-1].first && i != N-1) {
                if(a[i].second == 1) {
                    one++;
                }
                else {
                    zero++;
                }
            }
            else if(a[i].first == a[i-1].first && i == N-1) {
                if(a[i].second == 1) {
                    one++;
                }
                else {
                    zero++;
                }
                one >= zero? ans = ans + one: ans = ans + zero;
                zero = 0, one = 0;
            }
            else if(a[i].first != a[i-1].first && i == N-1) {
                zero = 0, one = 0;
                ans = ans + 1;
            }
        }
        cout<<ans<<"\n";


        T--;
    }
    
    
    return 0;
}