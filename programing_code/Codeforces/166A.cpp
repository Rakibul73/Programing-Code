
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/04 22:14:13



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

vector<pair<int,int>>  cin_vec_pair(int n) {
    int q, w;
    vector<pair<int,int>> a;
    for (int i = 0; i < n; i++)
    {
        cin>>q>>w;
        a.push_back(make_pair(q,w));
        
    }
    return a;
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n,k, p, t;
    cin>>n>>k;
    vector<pair<int,int>> a = cin_vec_pair(n);
    vector<int> b;
    sort(a.rbegin(), a.rend());
    int count = 0, codex = a[k-1].first;
    int bal = -2 , sal = -2;
    for (int i = 0; i < n; i++)
    {
        if(a[k-1].first == a[i].first) {
            if(bal == -2) {
                bal = i;
            }
            b.push_back(a[i].second);
        }
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < b.size(); i++)
    {
        if(b[k-1-bal] == b[i]) {
            count++;
        }
    }
    
    cout<<count<<"\n";    
    
    return 0;
}