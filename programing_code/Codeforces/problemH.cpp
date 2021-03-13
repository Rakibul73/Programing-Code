
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/13 13:56:57



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n;
    cin>>n;
    vector<int>a(n) , b(n) , c(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
    }
    unsigned long long sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        int g = a[i] > b[i] ? a[i] - b[i] : b[i] - a[i];
        sum1 = sum1 + (g*g);
    }
    unsigned long long sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        int g = a[i] > c[i] ? a[i] - c[i] : c[i] - a[i];
        sum2 = sum2 + (g*g);
    }
    if(sqrt(sum1) < sqrt(sum2)) {
        cout<<"Yan\n";
    }
    else {
        cout<<"MaratonIME\n";
    }
    

    
    return 0;
}