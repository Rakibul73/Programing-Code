#include <iostream>
#include <cassert>
#include <fstream>
using namespace std;
int fibonacci_fast(int n) {
    long a[n];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2 ; i<=n; i++) {
        a[i] = a[i-1] + a[i-2];
    }
    return a[n];
}

int main() {
    freopen("4", "r", stdin);
    freopen("output4.txt", "w", stdout);
    int n;
    cin >> n;
    cout << fibonacci_fast(n) << '\n';

}
