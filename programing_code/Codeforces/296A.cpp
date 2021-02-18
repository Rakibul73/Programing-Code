
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/18 15:45:54



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool cmp(pair<int,int>& a, pair<int, int>& b) {
    return a.second< b.second;
}
vector<pair<int,int>> mysort(map<int,int>& m) {
    vector<pair<int,int>> A;
    for (auto &&it : m)
    {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    return A;
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int input, n;
    cin>>n;
    vector<int>a;
    for (int i = 0; i < n; i++)
    {
        cin>>input;
        a.push_back(input);
    }
    if(n == 1) {
        cout<<"YES"<<"\n";
    }
    else {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if(a[i] != a[i+1]) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout<<"NO"<<"\n";
            return 0;
        }
        flag = false;
        map<int , int >mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        vector<pair<int,int>> b = mysort(mp);
        int k;
        n%2 == 0 ? k = n/2 : k = (n/2)+1;
        for (int i = b.size()-1; i > b.size()-2; i--)
        {
            if (b[i].second <= k) {
                flag = true;
            }
            else {
                flag = false;
            }
        }
        if(flag) {
            cout<<"YES"<<"\n";
            return 0;
        }
        else {
            cout<<"NO"<<"\n";
            return 0;
        }
    }
}