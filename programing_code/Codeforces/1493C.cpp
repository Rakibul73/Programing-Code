
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/07 02:14:47



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void balermata(string s, int k) 
{ 
      
    int n = s.size(); 
    vector<char> v;  
    map<char, int> mp;  
      
    for (int i = 0; i < s.size(); i++) { 
          
        if (mp[s[i]] == 0) { 
            mp[s[i]] = 1; 
            v.push_back(s[i]); 
        } 
    }
    sort(v.begin(), v.end()); 

    if (k > n) 
    { 
        cout << s; 
        for (int i = n; i < k; i++) { 
            cout << v[0]; 
        } 
          
        return;
    } 
    for (int i = k - 1; i >= 0; i--) { 
        if (s[i] != v[v.size() - 1]) { 
            for (int j = 0; j < i; j++) { 
                cout << s[j]; 
            }
            for (int j = 0; j < v.size(); j++) { 
                if (v[j] > s[i]) { 
                    cout << v[j]; 
                    break; 
                } 
            }
            for (int j = i + 1; j < k; j++)  
                cout << v[0];          
            return; 
        } 
    }
} 

int main() {
    // Below function is A fast IO program
    fast_cin();
    long long T;
    cin>>T;
    while (T)
    {
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n%k != 0) {
            cout<<"-1\n";
        }
        else {
            for (int i = 0; i < n; i++)
            {
                cout<<"z";
            }
            cout<<"\n";
        }

        T--;
    }
    
    
    return 0;
}