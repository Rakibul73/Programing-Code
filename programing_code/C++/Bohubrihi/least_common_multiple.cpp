
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <iostream>
#include <fstream>



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
    long long a, b, c;
    std::cin >> a >> b;
    c = gcd_naive(a, b); /* calculating gcd of these 2 number & storing in c  */
    std::cout << ((a*b)/c) << std::endl;  /* using Euclidean algorithm for lcm .  lcm(a,b) = (a*b)/(gcd(a,b))          */
    return 0;
}
