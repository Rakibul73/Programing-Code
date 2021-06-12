
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/06/10 21:32:04



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int INF = 1000000005;
long long INFF = 1000000000000000005LL;



void solve() {
    int n, sum = 0;
    cin >> n;
    
    vector<int> a(n), b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    if(n == 1) {
        cout << "0\n";
        return;
    }
    int final = sum / n;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > final) {
            b.push_back(a[i]);
        }
    }
    bool flag = true;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i] != a[i+1]) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << "0\n";
        return;
    }
    else {
        if(sum % n != 0) {
            cout << "-1\n";
            return;
        }

        // 5 2 5 re 4 4 4 banao
        cout << b.size() << "\n";
        return;
    }

    
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