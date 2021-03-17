
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/17 16:12:01



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
int main() {
    // Below function is A fast IO program
    fast_cin();
    string s;
    cin>>s;
    
    map<char, int> str = string_TO_map_With_Freq(s);
    vector<pair<char, int>> vec = map_to_vector(str);
    bool ff = true;
    for (int i = 0; i < vec.size(); i++)
    {
        if(vec[i].second != 1) {
            ff = false;
            break;
        }
    }
    if(ff) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
    
    
    return 0;
}