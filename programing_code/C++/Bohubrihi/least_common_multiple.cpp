
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <iostream>
#include <fstream>



long long gcd_naive(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd_naive(b, a % b);
}
long long lcm_calculate_for_two_num (long long a, long long b) {
    long long c = gcd_naive(a, b);
    return (a*b)/c;
}

int main()
{
    // freopen("5", "r", stdin);
    // freopen("output5.txt", "w", stdout);
    long long a, b, c;
    std::cin >> a >> b;
    c = gcd_naive(a, b); /* calculating gcd of these 2 number & storing in c  */
    std::cout << lcm_calculate_for_two_num(a, b) << std::endl;  /* using Euclidean algorithm for lcm .  lcm(a,b) = (a*b)/(gcd(a,b))          */
    return 0;
}
