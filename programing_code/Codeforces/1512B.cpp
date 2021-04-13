
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/04/10 22:09:01



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        char s[n][n];
        bool f = true, ff = true;
        int ii, jj, iii, jjj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                
                if(s[i][j] == '*' && f) {
                    ii = i;
                    jj = j;
                    f = false;
                }
                else if(s[i][j] == '*' && ff) {
                    iii = i;
                    jjj = j;
                    ff = false;
                }
                
            }
        }
        if(ii != iii & jj == jjj) {
            if(n - 1 == jj) {
                s[ii][jj - 1] = '*';
                s[iii][jj - 1] = '*';
            }
            else {
                s[ii][jj + 1] = '*';
                s[iii][jj + 1] = '*';
            }
        }
        else if(ii == iii & jj != jjj) {
            if(n - 1 == ii) {
                s[ii-1][jj] = '*';
                s[ii-1][jjj] = '*';
            }
            else {
                s[ii+1][jj] = '*';
                s[ii+1][jjj] = '*';
            }
        }
        else if(ii == jjj) {
            s[ii][ii] = '*';
            s[iii][jj] = '*';
        }
        else {
            s[ii][jjj] = '*';
            s[iii][jj] = '*';
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << s[i][j];
            }
            cout << "\n";
        }

        t--;
    }
    

    return 0;
}