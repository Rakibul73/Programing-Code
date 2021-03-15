
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/15 18:33:56



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
map<char, int> string_TO_map_With_Freq(string str) {
    map<char, int> abc;
    for (long long i = 0; i < str.size(); i++)
    {
        abc[str[i]]++;
    }
    abc.erase(' '); // map thika space key remove krsi.
    return abc;
}

vector<pair<char, int>> map_to_vector(const map<char,int> &map) {
    return vector<pair<char,int>>(map.begin(), map.end());
}

bool cmp(pair<char, int>& a, pair<char, int>& b) 
{ 
    return a.second < b.second; 
} 

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n , k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char , int> g = string_TO_map_With_Freq(s);
    vector<pair<char, int>> h = map_to_vector(g);
    sort(h.begin(), h.end(), cmp);

    long long count = 0, i = h.size()-1;
    while (k > 0) {
        if(k > h[i].second) {
            long long tem = (long long)h[i].second;
            long long temp = tem*tem;
            count = count + temp;
            k = k - h[i].second;
        }
        else {
            long long tem = (long long)k;
            long long temp = tem*tem;
            count = count + temp;
            k = k - h[i].second;
        }
        i--;
    }
    
    cout<<count<<"\n";
    
    
    return 0;
}