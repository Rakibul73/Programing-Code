
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <iostream>
#include <fstream>
using namespace std;

long long gcd_naive(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd_naive(b, a % b);

}

int main()
{
    freopen("5", "r", stdin);
    freopen("output5.txt", "w", stdout);
    long long a, b;
    cin >> a >> b;
    cout << gcd_naive(a, b) << endl;
    return 0;
}
