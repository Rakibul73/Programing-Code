
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/04/11 19:45:20



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void main_solve() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    long long n = s.size();
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0') {
            x++;
        }
        else if(s[i] == '1') {
            y++;
        }
    }
    if(n - a - b > a+b) {
        cout << "-1\n";
        return;
    }

    if ((n) % 2 == 0) {
        if(x%2 != 0 || y%2 != 0) {
            cout << "-1\n";
            return;
        }
        for (int i = 0; i*2 < n; i++)
        {
            if(s[i] != s[n-1-i]) {
                if(s[i] == '?' || s[n-1-i] == '?') {
                    if (s[i] == '?') {
                        s[i] = s[n - 1 - i];
                        if(s[n-1-i] == '1') {
                            b--;
                        }
                        else {
                            a--;
                        }
                    }
                    else {
                        s[n - 1 - i] = s[i];
                        if(s[i] == '1') {
                            b--;
                        }
                        else {
                            a--;
                        }
                    }
                }
                else {
                    cout << "-1\n";
                    return;
                }
            }
            else {
                if(s[i] == '?' && s[n-1-i] == '?') {
                    if(a > b) {
                        a = a - 2;
                        s[i] = '0';
                        s[n - 1 - i] = '0';
                    }
                    else {
                        b = b - 2;
                        s[i] = '1';
                        s[n - 1 - i] = '1';
                    }
                }
                else {
                    continue;
                }
            }
        }
        cout << s << "\n";
        return;
    }
    else {
        for (int i = 0; i*2 < n; i++) {
            if(n == 1) {
                break;
            }
            if(s[i] != s[n-1-i]) {
                if(s[i] == '?' || s[n-1-i] == '?') {
                    if (s[i] == '?') {
                        s[i] = s[n - 1 - i];
                        if(s[n-1-i] == '1') {
                            b--;
                        }
                        else {
                            a--;
                        }
                    }
                    else {
                        s[n - 1 - i] = s[i];
                        if(s[i] == '1') {
                            b--;
                        }
                        else {
                            a--;
                        }
                    }
                }
                else {
                    cout << "-1\n";
                    return;
                }
            }
            else {
                if(s[i] == '?' && s[n-1-i] == '?') {
                    if(a > b) {
                        a = a - 2;
                        s[i] = '0';
                        s[n - 1 - i] = '0';
                    }
                    else {
                        b = b - 2;
                        s[i] = '1';
                        s[n - 1 - i] = '1';
                    }
                }
                else {
                    continue;
                }
            }
        }
        if(n == 1) {
            if(s[0] == '1' && b == 1 && a == 0) {
                cout << s << "\n";
                return;
            }
            else if (s[0] == '0' && a == 1 && b == 0) {
                cout << s << "\n";
                return;
            }
            else if (s[0] == '?' && a == 0 && b == 1) {
                cout << "1\n";
                return;
            }
            else if (s[0] == '?' && a == 1 && b == 0) {
                cout << "0\n";
                return;
            }
            
            else {
                cout << "-1\n";
                return;
            }
        }
        a == 0 ? s[n / 2] = '1' : s[n / 2] = '0';
        cout << s << "\n";
        return;
    }
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        main_solve();
    }
    

    return 0;
}