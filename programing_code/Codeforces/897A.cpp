
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/13 15:44:08



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    int n, m;
    string s;
    cin>>n>>m;
    cin>>s;
    int l[m], r[m];
    char c1[m], c2[m];
    for (int i = 0; i < m; i++)
    {
        cin>>l[i]>>r[i]>>c1[i]>>c2[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = l[i]-1; j <= r[i]-1; j++)
        {
            if (s[j] == c1[i])
            {
                s[j] = c2[i];
            }
            
        }
        
    }






    
    cout<<s<<"\n";
    
    return 0;
}