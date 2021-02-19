
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/19 20:28:56



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
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        int bijor = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2 != 0) {
                bijor++;
            }
        }
        int jor = n - bijor;
        if (bijor == 0) {
            cout<<"No"<<"\n";
        }
        else if (jor == 0 && x%2 == 0) {
            cout<<"No"<<"\n";
        }
        else if(bijor >= x) {
            cout<<"Yes"<<"\n";
        }
        else {
            bool flag = false;
            for (int i = 1; i <= bijor; i = i+2)
            {
                if (x - i <= jor) {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                cout<<"Yes"<<"\n";
            }
            else {
                cout<<"No"<<"\n";
            }
        }
        
        t--;
    }
    
    
    return 0;
}