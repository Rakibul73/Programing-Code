
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/04/10 23:41:34



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n;
    cin >> n;
    vector<long long> b(n + 2);
    unsigned long long sum = 0, sum2 = 0;
    for (long long i = 0; i < n+2; i++)
    {
        cin >> b[i];
        sum = sum + b[i];
    }
    sum2 = sum;
    sort(b.begin(), b.end());
    sum2 = sum2 - b[n] - b[n+1];
    if(b[n] == sum2) {
        for (long long j = 0; j < n; j++)
        {
            cout << b[j] <<" ";
        }
        cout << "\n";
        return;
    }
    for (long long i = n; i >= 0; i--)
    {
        unsigned long long temp = (sum - b[n+1] - b[i]);
        if(b[n+1] == temp) {
            for (long long j = 0; j < n+1; j++)
            {
                if(i == j) {
                    continue;
                }
                cout << b[j] <<" ";
            }
            cout << "\n";
            return;
        }
    }

    cout << "-1\n";
    return;
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin >> t;
    while (t)
    {
        solve();

        t--;
    }
    

    return 0;
}