
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/12 19:45:33



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    long long n;
    int input;
    cin>>n;
    vector < int > z;
    for (long long i = 0; i < n; i++)
    {
        cin>>input;
        z.push_back(input);
    }
    sort(z.begin(), z.end());


    vector < int > a, b, c;
    for (long long i = 0; i < n/3; i++)
    {
        a.push_back(z[i]);
    }
    for (long long i = n/3; i < (n/3)*2; i++)
    {
        b.push_back(z[i]);
    }
    for (long long i = (n/3)*2; i < n; i++)
    {
        c.push_back(z[i]);
    }

    z.clear();
    vector<vector<int>> g;
    int p = 0;
    for (long long i = 0; i < n/3; i++)
    {
        if ( (c[i] % b[i] == 0) && (b[i] % a[i] == 0) && a[i] < b[i] && b[i] < c[i])
        {
            vector<int> temp;
            temp.push_back(a[i]);
            temp.push_back(b[i]);
            temp.push_back(c[i]);
            g.push_back(temp);
        }
        else {
            p = -1;
            break;
        }
    }
    if (p == -1)
    {
        cout<<"-1"<<"\n";
    }
    else {
        for (long long i = 0; i < n/3; i++)
        {
            cout<<g[i][0]<<" "<<g[i][1]<<" "<<g[i][2]<<"\n";
        }
        
    }
    return 0;
}