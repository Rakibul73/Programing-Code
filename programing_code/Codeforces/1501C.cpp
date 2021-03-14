
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/13 20:18:06



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void codex(int arr[], int n)
{
    unordered_map<int, vector< pair<int, int>> > mp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int ans = arr[i] + arr[j];
            if (mp.find(ans) != mp.end()) {
                for (auto p : mp.find(ans)->second) {
                    if (p.first!=i && p.first!=j && p.second!=i && p.second!=j) {
                        cout<<"YES\n";
                        cout<<i+1<<" "<<j+1<<" "<<p.first+1<<" "<<p.second+1<<"\n";
                        return;
                    }
                }
            }
            else {
                mp[ans].push_back({ i, j });
            }
        }
    }

    cout<<"NO\n";
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    long long n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    

    codex(a, n);
    
    return 0;
}