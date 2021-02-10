
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
    int n;
    long long input;
    cin >> n;
    vector<int> a;
    for (long long i = 0; i < n; i++) {
        cin >> input;
        a.push_back(input);
    }
    sort(a.begin(), a.end());
    long long minCount = 1, maxCount = 0;
    for (long long i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            minCount++;
        }
        else {
            break;
        }
    }
    if (a[0] != a[n-1]) {
        maxCount = 1;
        for (long long i = n - 1; i > 0; i--) {
            if (a[i] == a[i - 1]) {
                maxCount++;
            }
            else {
                break;
            }
        }
    }
    long long y, x;
    if (maxCount != 0) {
        y = minCount * maxCount;
        x = a[n - 1] - a[0];
    }
    else {
        x = 0;
        y = (((minCount-1)*(minCount-1))+(minCount-1)) /2;
    }

    cout << x << " " << y << "\n";
    return 0;
}