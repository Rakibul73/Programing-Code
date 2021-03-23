
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/21 20:51:56



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

vector<pair<int, int>> map_to_vector(const map<int,int> &map) {
    return vector<pair<int,int>>(map.begin(), map.end());
}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        int n, m;
        cin>>n>>m;
        vector<set<int>> a;
        vector<int>::iterator ip;
        for (int i = 0; i < m; i++)
        {
            set<int> temp;
            for (int j = 0; j < n; j++)
            {
                int input;
                cin>>input;
                temp.insert(input);
            }
            a.push_back(temp);
        }
        map< int, int> cpy;
        for (int i = 0; i < a.size(); i++)
        {
            for (auto x : a[i])
            {
                cpy[x]++;
            }
            
        }
        vector<pair<int, int>> codex =  map_to_vector(cpy);
        sort(codex.begin(), codex.end(), sortbysec);
        

        t--;
    }
    
    
    return 0;
}