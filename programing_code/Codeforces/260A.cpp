
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/18 20:15:18



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int a ,b , n, i;
    cin>>a>>b>>n;
    bool ff = false , gg = false;;
    string s = to_string(a);
    while (n)
    {
        for ( i = 0; i <= 9; i++)
        {
            if ((((stoi(s))*10) + i) % b == 0) {
                s = to_string((((stoi(s))*10) + i)) ;
                ff = true;
                break;
                
            }
        }
        if(i == 0) {
            gg = true;
            n--;
            break;
        }
        if(!ff) {
            break;
        }
        n--;
    }
    if(gg) {
        cout<<s;
        for (int i = 1; i <= n; i++)
        {
            cout<<"0";
        }
        cout<<"\n";
        
    }
    else if(ff) {
        cout<<s<<"\n";
    }
    else {
        cout<<"-1\n";
    }
    return 0;
}