
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/04/08 18:55:29



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    long long n, input , sum = 0;
    cin>>n;
    vector<long long> a;
    for (long long i = 0; i < n; i++)
    {
        cin>>input;
        if(input % 2 == 0) {
            sum = sum + input;
        }
        else {
            a.push_back(input);
        }
    }
    sort(a.begin(), a.end());
    if(a.size() % 2 == 0) {
        for (long long i = 0; i < a.size(); i++)
        {
            sum = sum + a[i];
        }
    }
    else {
        for (long long i = 1; i < a.size(); i++)
        {
            sum = sum + a[i];
        }
    }
    cout<<sum<<"\n";
    
    return 0;
}