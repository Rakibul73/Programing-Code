
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <iostream>
#include <cassert>
#include <fstream>
using namespace std;
int fibonacci_fast(int n) {
    int c, a = 0, b = 1;
    for (int i = 2 ; i<=n; i++) {
       c = (a + b) % 10;
       a = b;
       b = c;
    }
    return c;
}

int main() {
    freopen("5", "r", stdin);
    freopen("output5.txt", "w", stdout);
    long n;
    cin >> n;
    cout << fibonacci_fast(n) << '\n';

}
