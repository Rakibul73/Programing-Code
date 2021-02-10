
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
    cin >> n;
    cout << n << " ";

    while (n > 1) {
        if(n%2 == 0) {
            n = n/2;
            cout<<n<<" ";
        }
        else {
            for (int i = n/2; i >= 1; i--)
            {
                if(n%i == 0) {
                    cout<<i<<" ";
                    n = i;
                }
            }
            
        }

    }

    return 0;
}