
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/13 13:57:54



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n, T;
    cin>>n>>T;
    vector<int >a(n);
    int yan = 0, Nathan = 0;
    int yanC = 0, NathanC = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if( yan + a[i] <= T) {
            yan = yan + a[i];
            yanC++;
        }
        else {
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if( Nathan + a[i] <= T) {
            Nathan = Nathan + a[i];
            NathanC++;
        }
        else {
            break;
        }
    }
    if(NathanC < yanC) {
        cout<<"Yan\n";
    }
    else if(NathanC > yanC) {
        cout<<"Nathan\n";
    }
    else {
        cout<<"Empate\n";
    }
    
    return 0;
}