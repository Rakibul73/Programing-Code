
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/06/10 22:05:09



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n, l, r, count = 0, input;
    cin >> n >> l >> r;
    vector<long long> a, temp;
    for (long long i = 0; i < n; i++)
    {
        cin >> input;
        if(input > r) {
            continue;
        }
        a.push_back(input);
    }
    for (long long i = 0; i < a.size()-1; i++)
    {
        for (long long j = i + 1; j < a.size(); j++)
        {
            temp.push_back(a[i] + a[j]);
        }
        
    }
    for (long long i = 0; i < temp.size(); i++)
    {
        if(l <= temp[i] && temp[i] <= r) {
            count++;
        }
    }
    

    cout << count << "\n";
    return;
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin >> t;
    //t = 1;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    
    return 0;
}