
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2022/01/10 02:09:32



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

vector<pair<int, int>> map_to_vector(const map<int,int> &map) {
    return vector<pair<int,int>>(map.begin(), map.end());
}

void solve() {
    int n, zero = 0;
    cin >> n;
    int arr[n];
    map<int, int> koyda;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] < 0) {
            arr[i] = -arr[i];
        }
        if(arr[i] == 0) {
            zero = 1;
            continue;
        }
        koyda[arr[i]]++;
    }

    vector<pair<int, int>> v = map_to_vector(koyda);

    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i].second > 1) {
            sum = sum + 2;
        }
        else {
            sum = sum + 1;
        }
    }
    
    if (zero == 1) {
        cout << sum + 1 << endl;
    }
    else {
        cout << sum << endl;
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