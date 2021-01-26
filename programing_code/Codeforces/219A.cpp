
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int k, f[26] = {0};
    string s;
    cin>>k;
    cin>>s;
    int n = s.length();
    for(int i = 0; i<n; i++) {
        f[s[i] - 'a']++;
    }
    for(int i = 0; i <26  ; i++) {
        if(f[i]%k != 0) {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    for(int i = 0; i<k ; i++) {
        for(int j = 0; j< 26; j++) {
            if(f[j] == 0) {
                continue;
            }
            else {
                int m = f[j]/k;
                while (m)
                {
                    cout<<char(97+j);
                    m--;
                }
                
            }
        }
    }
    cout<<endl;
    return 0;
}