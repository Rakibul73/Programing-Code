
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/19 22:13:45



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define SIZE 26
map<char, int> stringTOmapWithFreq(string str) {
    map<char, int> abc;
    for (long long i = 0; i < str.size(); i++)
    {
        abc[str[i]]++;
    }
    abc.erase(' '); // map thika space key remove krsi.
    return abc;
}
vector<pair<char, int>> maptovector(const map<char,int> &map) {
    return vector<pair<char,int>>(map.begin(), map.end());
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char, int>a, c;
    vector<pair<char, int>> b;
    a = stringTOmapWithFreq(s1);
    c = stringTOmapWithFreq(s2);
    b = maptovector(c);
    bool flag = true;
    for (long long i = 0; i < b.size(); i++)
    {
        if(a[b[i].first] < b[i].second) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout<<"YES"<<"\n";
    }
    else {
        cout<<"NO"<<"\n";
    }
    
    return 0;
}