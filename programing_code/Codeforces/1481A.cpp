
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t,x,y;
    string arr;
    cin>>t;
    while(t) {
        cin>>x>>y;
        cin>>arr;
        int z = arr.size();
        for (int i = 0; i < z; i++)
        {
            if(x > 0) {
                if (arr[i] == 'R') {
                    x--;
                }
            }
            if(y > 0) {
                if (arr[i] == 'U') {
                    y--;
                }
            }
            if(x < 0) {
                if (arr[i] == 'L') {
                    x++;
                }
            }
            if(y < 0) {
                if (arr[i] == 'D') {
                    y++;
                }
            }
        }
        if ( x == 0 && y == 0) {
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
        




        t--;
    }
    return 0;
}