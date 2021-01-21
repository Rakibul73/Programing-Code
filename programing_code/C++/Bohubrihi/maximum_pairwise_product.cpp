
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
    freopen("5", "r", stdin);
    freopen("output5.txt", "w", stdout);
    long long n;
    cin >> n;
    long long numbers[n];
    for (long long i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }
    long long m = sizeof(numbers)/sizeof(numbers[0]);
    sort(numbers, numbers + m, greater<long long>());

    cout << numbers[0]*numbers[1] << endl;

    return 0;
}
