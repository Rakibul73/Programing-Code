
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/07/18 13:58:54



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n, ami = 0, tumi = 0, count = 0;
    cin >> n;
    vector<long long> a(n), b(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        ami = ami + a[i];
    }
    for (long long i = 0; i < n; i++)
    {
        cin >> b[i];
        tumi = tumi + b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long koydaBad = n / 4;
    for (long long i = 0; i < koydaBad; i++)
    {
        ami = ami - a[i];
    }
    for (long long i = 0; i < koydaBad; i++)
    {
        tumi = tumi - b[i];
    }

    long long age_koydaBad = koydaBad;
    while (ami < tumi)
    {
        ami = ami + 100;
        count++;
        koydaBad = ((n + 1) / 4);
        if(age_koydaBad < koydaBad) {
            ami = ami - a[koydaBad - 1];
            tumi = tumi + 
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