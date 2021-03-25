
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/24 14:02:14



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n, boroX = 0;
    cin>>n;
    vector<char> ab(n);
    for (int i = 0; i < n; i++)
    {
        cin>>ab[i];
        if(ab[i] == 'X') {
            boroX++;
        }
    }
    if(boroX == n/2) {
        cout<<"0\n";
        for (int i = 0; i < n; i++)
        {
            cout<<ab[i];
        }
        cout<<"\n";
    }
    else {
        int chotoX = (n-boroX);
        int codex = max(boroX, chotoX);
        cout<<codex - (n/2)<<"\n";
        if(boroX < n/2) {
            for (int i = 0; i < n && boroX != n/2; i++)
            {
                if(ab[i] == 'x') {
                    ab[i] = 'X';
                    boroX++;
                }
            }
        }
        else {
            for (int i = 0; i < n && chotoX != n/2; i++)
            {
                if(ab[i] == 'X') {
                    ab[i] = 'x';
                    chotoX++;
                }
            }
        }
        


        for (int i = 0; i < n; i++)
        {
            cout<<ab[i];
        }
        cout<<"\n";
    }

    
    
    
    return 0;
}