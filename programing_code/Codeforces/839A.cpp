
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/19 15:25:23



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n,k;
    cin>>n>>k;
        vector<int>a(n);
        int sum = 0, pos;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum = sum + a[i];
            if(sum >= 8) {
                sum = sum - 8;
                k = k - 8;
            }
            else {
                k = k - sum;
                sum = 0;
            }
            if (k <=0 && flag) {
                pos = i+1;
                flag = false;
            }
        }
        if (k <=0) {
            cout<<pos<<"\n";
        }
        else {
            cout<<"-1"<<"\n";
        }    
    
    return 0;
}