
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/28 13:55:15



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // Below function is A fast IO program
    fast_cin();
    int n;
    cin>>n;
    vector<int> a(2*n);
    map<int, vector<int>> mp;
    for (int i = 0; i < 2*n; i++)
    {
        cin>>a[i];
        mp[a[i]].push_back(i+1);
    }
    bool aseNaki = true;
    for (auto &&i : mp)
    {
        if(i.second.size() % 2 != 0) {
            aseNaki = false;
            break;
        }
    }
    if(aseNaki) {
        for (auto &&i : mp)
        {
            for (int j = 0; j < i.second.size(); j = j + 2)
            {
                cout<<i.second[j]<<" "<<i.second[j+1]<<"\n";;
            }
        }
    }
    else {
        cout<<"-1"<<"\n";
    }
    
    
    
    return 0;
}