
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

#include <bits/stdc++.h>
using namespace std;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin >> t;
    while (t) {
        long long A, B, n, input;
        cin >> A >> B >> n;
        vector<int> a, b;
        for (int i = 0; i < n; i++) {
            cin >> input;
            a.push_back(input);
        }
        for (int i = 0; i < n; i++) {
            cin >> input;
            b.push_back(input);
        }

        vector<pair<int, int>> vec;
        for (int i = 0; i < n; i++) {
            vec.push_back(make_pair(a[i], b[i]));
        }
        a.clear();
        b.clear();

        sort(vec.rbegin(), vec.rend());

        while (B > 0 && vec.size() > 0) {
            for (int i = vec.size() - 1; i >= 0; i--) {
                while (vec[i].second > 0) {
                    B = B - vec[i].first;
                    vec[i].second = vec[i].second - A;
                    if (B <= 0) {
                        break;
                    }
                }
                if (vec[i].second <= 0) {
                    vec.pop_back();
                }

                if (B <= 0) {
                    break;
                }
            }
        }
        if (vec.size() == 0) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }

        t--;
    }

    return 0;
}