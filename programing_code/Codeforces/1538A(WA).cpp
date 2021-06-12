
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/06/11 16:49:13



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int INF = 1000000005;
long long INFF = 1000000000000000005LL;


void solve() {
    int n, borovai = -1, chotovai = INF,boro, choto;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > borovai) {
            borovai = a[i];
            boro = i;
        }
        if(a[i] < chotovai) {
            chotovai = a[i];
            choto = i;
        }
    }
    int ans = 0;
    int ordek;
    n % 2 == 0 ? ordek = (n / 2) - 1 : ordek = (n / 2);
    if(choto <= ordek && boro <= ordek) {
        if(choto > boro) {
            choto++;
            cout << choto << "\n";
            return;
        }
        else {
            boro++;
            cout << boro << "\n";
            return;
        }
    }
    else if(choto >= ordek && boro >= ordek) {
        if(choto < boro) {
            choto = n - choto;
            cout << choto << "\n";
            return;
        }
        else {
            boro = n - boro;
            cout << boro << "\n";
            return;
        }
    }
    else {
        if(choto < boro) {
            ans = (choto + 1) + (n - boro);
            cout << ans << "\n";
            return;
        }
        else {
            ans = (boro + 1) + (n - choto);
            cout << ans << "\n";
            return;
        }
    }

    cout << ans << "\n";
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