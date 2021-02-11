
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/11 17:39:03



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t, count = 0;
    long long Sx , Sy , Ex , Ey;
    cin>>t>>Sx>>Sy>>Ex>>Ey;
    string s;
    cin>>s;
    long long x = Ex - Sx, y = Ey - Sy;
    for (int i = 0;    i < t ;    i++)
    {
        count++;
        if(s[i] == 'S' && y < 0) {
            y++;
        }
        else if(s[i] == 'E' && x > 0) {
            x--;
        }
        else if(s[i] == 'N' && y > 0) {
            y--;
        }
        else if(s[i] == 'W' && x < 0) {
            x++;
        }
        if (x == 0 && y == 0)
        {
            break;
        }
        
    }
    if (x == 0 && y == 0)
    {
        cout<<count<<"\n";
    }
    else
    {
        cout<<"-1"<<"\n";
    }
    
    
    


    return 0;
}