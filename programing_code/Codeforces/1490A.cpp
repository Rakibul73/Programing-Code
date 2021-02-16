
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/16 21:02:17



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
        int n, input, big, small, count = 0;
        cin>>n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            cin>>input;
            a.push_back(input);
        }
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] > a[i+1]) {
                small = a[i+1];
                big = a[i];
            }
            else {
                big = a[i+1];
                small = a[i];
            }
            if((double)big/small <= 2.0) {
                continue;
            }
            else {
                small = small*2;
                count++;
                while ((double)big/small > 2.0)
                {
                    small = small*2;
                    count++;
                }
                

            }
            
        }

        cout<<count<<"\n";
        
        
        
        t--;
    }
    
    return 0;
}