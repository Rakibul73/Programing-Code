
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/18 18:19:35



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
bool sortbysecdesc(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n;
    long long input, q, w;
    cin>>n;
    vector<pair<int,int>> a, b;
    for (int i = 0; i < n; i++)
    {
        cin>>q>>w;
        a.push_back(make_pair(q,w));
        
    }
    b = a;
    sort(a.begin(), a.end());
    long long x, y;
    x = a[0].first;
    sort(a.begin(), a.end(), sortbysecdesc);
    y = a[0].second;
    int i;
    bool flag = false;
    for (i = 0; i < n; i++)
    {
        if(b[i].first == x && b[i].second == y) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout<<i+1<<"\n";
    }
    else {
        cout<<"-1"<<"\n";
    }
    
    
    
    return 0;
}