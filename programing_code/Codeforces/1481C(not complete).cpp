
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
    int t;
    cin>>t;
    while (t)
    {
        int n,m,input;
        vector<int> c,b;
        cin>>n>>m;
        for (int i = 0; i < n; i++)
        {
            cin>>input;
            c.push_back(input);
        }
        for (int i = 0; i < n; i++)
        {
            cin>>input;
            if(input != c[i]) {
                b.push_back(input);
            }
        }
        c.clear();
        for (int i = 0; i < m; i++)
        {
            cin>>input;
            c.push_back(input);
        }
        int p = -1, i, j;
        
        for (i=0; i < n; i++)
        {
            for ( j = 0; j < m; j++)
            {
                if (b[i] == c[j])
                {

                    b.erase(b.begin()+i);
                    c.erase(c.begin()+j);
                    
                    p=1;
                    break;
                }
                
            }
            
        }
        if(p == -1) {
            cout<<"NO"<<"\n";
        }
        else {
            cout<<"YES"<<"\n";
        }
        
        
        




        t--;
    }
    
    return 0;
}