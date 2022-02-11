
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2022/01/12 01:43:32



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    


    //already ase
    if((c-b == b-a) || (a-b == b-c)) {
        cout << "YES\n";
        return;
    }
    //sob soman
    if(a == b && b == c) {
        cout << "YES\n";
        return;
    }

    //2 1 1 || 1 1 2
    if((a == b == 1 && (c%2 == 0)) || (b == c == 1 && (a%2 == 0))) {
        cout << "NO\n";
        return;
    }
    if((a == b == 1 && (c%2 != 0)) || (b == c == 1 && (a%2 != 0))) {
        cout << "YES\n";
        return;
    }


    // 1 jekno 1
    if (a == c == 1) {
        cout << "YES\n";
        return;
    }

    // 1 1 4  ||| 4 1 1
    

    // jodi serial hoy
    if(a < b && b < c) {
        if((c-a)% b == 0) {
            cout << "YES\n";
            return;
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    if(a > b && b > c) {
        if((a-c)% b == 0) {
            cout << "YES\n";
            return;
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    else {
        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());
        if((v[2] - v[1]) % v[0] == 0) {
            cout << "YES\n";
            return;
        }
        else {
            cout << "NO\n";
            return;
        }
        
    }





    // // 10 5 30 || 30 5 10
    // if(b < a && b < c) {
    //     if ((c-a) % b == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     if ((a-c) % b == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else {
    //         cout << "NO\n";
    //         return;
    //     }
    // }

    // // 4 4 12
    // if(b == a && b < c) {
    //     if ((c-a) % b == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     if ((a-c) % b == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else {
    //         cout << "NO\n";
    //         return;
    //     }
    // }
    // //12 4 4
    // if(b < a && b == c) {
    //     if ((c-a) % b == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     if ((a-c) % b == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else {
    //         cout << "NO\n";
    //         return;
    //     }
    // }

    // //2 6 3
    // if(b > a && b > c) {
    //     if (((b-a) + b) % c == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else if (((b-c) + b) % a == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else {
    //         cout << "NO\n";
    //         return;
    //     }
    // }
    // //2 6 6
    // if(b > a && b == c) {
    //     if (((b-a) + b) % c == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else if (((b-c) + b) % a == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else {
    //         cout << "NO\n";
    //         return;
    //     }
    // }
    // //6 6 2
    // if(b == a && b > c) {
    //     if (((b-a) + b) % c == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else if (((b-c) + b) % a == 0) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else {
    //         cout << "NO\n";
    //         return;
    //     }
    // }




    // // 2 4 8  || 8 4 2
    // if(a < b && b < c) {
        
    // }




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