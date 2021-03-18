
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/17 20:52:23



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        int n;
        cin>>n;
        map< int ,int > b;
        for (int i = 0; i < n; i++)
        {
            int input;
            cin>>input;
            b[input]++;
        }
        
        for (auto &&i : b)
        {
            cout<<i.first<<" ";
            i.second--;
        }
        for (auto &&i : b)
        {
            while(i.second) {
                cout<<i.first<<" ";
                i.second--;
            }
        }



        cout<<"\n";


        t--;
    }
    
    
    return 0;
}