
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/08 18:03:15



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    char a[4][4];
    int cpy = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>a[i][j];
            if(a[i][j] == '#'){
                cpy++;
            }
        }
    }
    bool yoo = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((a[i][j] == a[i+1][j+1] && a[i][j] == a[i+1][j]) || (a[i][j] == a[i+1][j] && a[i][j] == a[i][j+1]) || (a[i][j] == a[i+1][j+1] && a[i][j] == a[i][j+1]))  {
                yoo = true;
                break;
            }
            
        }
        if(yoo) {
            break;
        }
        
    }
    
    if(cpy == 8 && yoo) {
        cout<<"YES\n";
    }
    else if (cpy == 8) {
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
    }

    

    
    return 0;
}