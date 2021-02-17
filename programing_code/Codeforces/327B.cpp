
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/17 18:05:50



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    int n;
    cin>>n;
    vector<int>a;
    int p ,count = 0;

    for (int i = 2; i < 10000000; i++)
    {
        p =1;
        if(i % 2 == 0) {
            continue;
        }
        for (int j = 2; j*j <= i ; j++)
        {
            if (i % j == 0) {
                p = 0;
                break;
            }
        }
        if ( p == 1) {
            cout<<i<<" ";
            count++;
        }
        if (count == n) {
            break;
        }
        
    }
    
    cout<<"\n";
    return 0;
}