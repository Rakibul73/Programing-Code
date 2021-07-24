
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/07/04 13:16:53



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

long long gcd_fast(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd_fast(b, a % b);
}
long long lcm_calculate_for_two_num (long long a, long long b) {
    long long c = gcd_fast(a, b);
    return (a*b)/c;
}

int count_Divisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            if (n / i == i) 
                cnt++;
            else
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 

void solve() { 
    // 2 3 2 3 2 
    // 4 2 3 2 3 2 
    // 5 2 3 2 3 2 
    // 4
    // 3 3 4  3 3 5  3 3 4  3 3 5  3 3 4  3 3 5  3 3 4  3 3 5
    //     3      6      9      12    15     18     21     24
    long long n, ans = 0;
    cin >> n;
    if(n % 2 == 0) {
        ans = ans + ((n / 2) * 2);
        long long baki = n / 2;
        if(baki % 3 == 0) {
            if(baki % 6 == 0) {
                // 5
                ans = ans + ((baki - (baki / 3)) * 3);
                ans = ans + ((baki / 6) * 4) + ((baki / 6) * 5);
            }
            else {
                // 4
                ans = ans + ((baki - (baki / 3)) * 3);
                ans = ans + (((baki / 3) / 2) * 5) + ((((baki / 3) / 2) + 1) * 4);
            }
        }
        else {
            ans = ans + ((baki % 3) * 3);
            long long abrBaki = baki - (baki % 3);
            if(abrBaki % 6 == 0) {
                // 5
                ans = ans + ((abrBaki - (abrBaki / 3)) * 3);
                ans = ans + ((abrBaki / 6) * 4) + ((abrBaki / 6) * 5);
            }
            else {
                // 4
                ans = ans + ((abrBaki - (abrBaki / 3)) * 3);
                ans = ans + (((abrBaki / 3) / 2) * 5) + ((((abrBaki / 3) / 2) + 1) * 4);
            }
            
        }
        cout << ans << "\n";
        return;
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