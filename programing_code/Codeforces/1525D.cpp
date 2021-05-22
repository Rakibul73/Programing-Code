
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/05/17 16:14:10



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void solve() {
    int n, count = 0;
    bool allzero = true;
    cin >> n;
    vector<int> a(n);
    vector<int> oneLocation;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1) {
            oneLocation.push_back(i);
            allzero = false;
        }
    }
    if(allzero) {
        cout << "0\n";
        return;
    }
    else {
        for (int i = 0; i < oneLocation.size(); i++)
        {
            if(a[oneLocation[i]] == 1) {
                int age = oneLocation[i] - 1, pore = oneLocation[i] + 1;
                if(age == -1) {
                    while(a[pore] == 1) {
                        pore++;
                    }
                    a[pore] = 1;
                    count = count + (pore - oneLocation[i]);
                }
                else if(pore == n) {
                    while(a[age] == 1) {
                        age--;
                    }
                    a[age] = 1;
                    count = count + (oneLocation[i] - age);
                }
                else {
                    while(a[age] == 1 && a[pore] == 1) {
                        age--;
                        if(age == -1) {
                            age++;
                        }
                        pore++;
                        if(pore == n) {
                            pore--;
                        }
                    }
                    if(a[age] == 0) {
                        a[age] = 1;
                        count = count + (oneLocation[i] - age);
                    }
                    else {
                        a[pore] = 1;
                        count = count + (pore - oneLocation[i]);
                    }
                }
            }
        }
        cout << count << "\n";
        return;
    }
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    //cin >> t;
    t = 1;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    
    return 0;
}