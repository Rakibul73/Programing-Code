
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    cin >> n;
    // two(2) power of x=(0,1,2,3,4,5,6,,,,,, All natural number (NOT vog nang sho ))  equal to n 
    //  eg: 2^x = n  if true than it return 0 otherwise another num
    long long a = (n & (n - 1)); 

    // it checks whether number n is power of two or not.

    // Explanation :-

    // if n = 3 or any other number which is not power of 2
    // (n = 3, So (n-1) = 2)
    // 3 in binary= 0000 0011
    // 2 in binary= 0000 0010
    // than AND operation :- 0000 0010

    // if n = 2 or any other number which is power of two
    // (n = 2 so (n-1) = 1)
    //  2 in binary= 0000 0010 
    // 1 in binary= 0000 0001
    // than AND Operation :- 0000 0000
    // So if the number is power of two it always returns 0.

    cout<<a<<endl;

    return 0;
}