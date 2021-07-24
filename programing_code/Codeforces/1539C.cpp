
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/06/24 20:45:34



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)



void solve() {
    long long n, k, x, count = 0, dup_count = 0;
    cin >> n >> k >> x;
    vector<long long> a(n);
    long long dup_k = k;
    for (long long i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    if(n == 1) {
        cout << "1\n";
        return;
    }
    vector<long long> b = a;
    
    sort(a.begin(), a.end());
    for (long long i = 0; i < a.size()-1; i++)
    {
        if(a[i+1] - a[i] > x && k > 0) {
            k--;
            a[i] = a[i] + x;
            while (a[i+1] - a[i] > x && k > 0) {
                k--;
                a[i] = a[i] + x;
            }
            if(a[i+1] - a[i] > x && k <= 0) {
                count++;
            }
            continue;
        }
        if((a[i+1] - a[i] > x && k <= 0) || (i == n-1-1)) {
            count++;
        }
        if(a[i+1] - a[i] > x && k <= 0 && i == n-2) {
            count++;
        }
    }

    sort(b.rbegin(), b.rend());
    for (long long i = 0; i < b.size()-1; i++)
    {
        if(b[i] - b[i+1] > x && dup_k > 0) {
            dup_k--;
            b[i + 1] = b[i + 1] + x;
            while (b[i] - b[i+1] > x && dup_k > 0) {
                dup_k--;
                b[i + 1] = b[i + 1] + x;
            }
            if(b[i] - b[i+1] > x && dup_k <= 0) {
                dup_count++;
            }
            continue;
        }
        if((b[i] - b[i+1] > x && dup_k <= 0) || (i == n-1-1)) {
            dup_count++;
        }
        if(b[i] - b[i+1] > x && dup_k <= 0 && i == n-2) {
            dup_count++;
        }
        
    }

    if(dup_count > count) {
        cout << count << "\n";
        return;
    }
    else {
        cout << dup_count << "\n";
        return;
    }
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    solve();

    // int t;
    // cin >> t;
    // for (int i = 1; i <= t; i++) {
    //     solve();
    // }
    
    return 0;
}