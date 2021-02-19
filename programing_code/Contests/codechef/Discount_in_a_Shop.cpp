
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/19 18:38:26



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    int T;
    cin>>T;
    while (T)
    {
        string N;
        cin>>N;
        bool flag = true;
        vector<char>a;
        for (long long i = 0; i < N.size(); i++)
        {
            if(N[i] > N[i+1] && flag) {
                flag = false;
                continue;
            }
            a.push_back(N[i]);
        }
        int ind = -1; 
        for (int i = 0; i < a.size(); i++) { 
            if (a[i] != '0') { 
                ind = i;
                break; 
            } 
        }
        if (ind == -1) { 
            cout <<"0";
        }
        else {
            for (int i = 0; i < a.size() - ind; i++) {
                cout << a[ind + i];
            }
        }

        cout<<"\n";
        T--;
    }
    
    
    return 0;
}