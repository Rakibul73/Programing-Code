
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/07/24 13:40:49



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() { 
    long long n, a, b, temp;
    std::cin >> n;
    
    if(n % 2 == 0) {
        a = b = n / 3;
        temp = a;
        b = b + 1;
        if(a + (b*2) == n) {
            std::cout << a <<" "<< b << "\n";
            return;
        }
        if(b + (a*2) == n) {
            std::cout << b <<" "<< a << "\n";
            return;
        }
        if(temp + (temp*2) == n) {
            std::cout << temp <<" "<< temp << "\n";
            return;
        }
        a = temp;
        b = temp - 1;
        if(a + (b*2) == n) {
            std::cout << a <<" "<< b << "\n";
            return;
        }
        if(b + (a*2) == n) {
            std::cout << b <<" "<< a << "\n";
            return;
        }
    }
    else {
        a = b = n / 2;
        temp = a;
        b = b + 1;
        if(a + (b*2) == n) {
            std::cout << a <<" "<< b << "\n";
            return;
        }
        if(b + (a*2) == n) {
            std::cout << b <<" "<< a << "\n";
            return;
        }
        if(temp + (temp*2) == n) {
            std::cout << temp <<" "<< temp << "\n";
            return;
        }
        a = temp;
        b = temp - 1;
        if(a + (b*2) == n) {
            std::cout << a <<" "<< b << "\n";
            return;
        }
        if(b + (a*2) == n) {
            std::cout << b <<" "<< a << "\n";
            return;
        }
        //------------
        a = b = n / 3;
        temp = a;
        b = b + 1;
        if(a + (b*2) == n) {
            std::cout << a <<" "<< b << "\n";
            return;
        }
        if(b + (a*2) == n) {
            std::cout << b <<" "<< a << "\n";
            return;
        }
        if(temp + (temp*2) == n) {
            std::cout << temp <<" "<< temp << "\n";
            return;
        }
        a = temp;
        b = temp - 1;
        if(a + (b*2) == n) {
            std::cout << a <<" "<< b << "\n";
            return;
        }
        if(b + (a*2) == n) {
            std::cout << b <<" "<< a << "\n";
            return;
        }
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