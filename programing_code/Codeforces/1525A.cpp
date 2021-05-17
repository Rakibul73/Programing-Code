
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/05/16 16:17:25



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

long long gcd_fast(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd_fast(b, a % b);
}


int decimalToFraction(double number)
{
    double intVal = floor(number);
    double fVal = number - intVal;
    const long pVal = 1000000000;
    int gcdVal = gcd_fast(round(fVal * pVal), pVal);
    int num = round(fVal * pVal) / gcdVal;
    int deno = pVal / gcdVal;

    return deno;
}

void solve() { 
    int k;
    cin >> k;
    if(100 % k == 0) {
        cout << (100 / k ) << "\n";
        return;
    }
    else {
        double m = k / 100.0;
        int d = decimalToFraction(m);
        cout << d << "\n";
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