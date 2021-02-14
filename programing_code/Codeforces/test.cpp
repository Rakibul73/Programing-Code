
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/13 23:13:38



#include <bits/stdc++.h>
#include <map>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
std::map<char, int>
storeStringFrequency(string str)
{
    map<char, int> M;
    for (int i = 0; str[i]; i++) 
    {
        if (M.find(str[i]) == M.end()) 
        {
            M.insert(make_pair(str[i], 1));
        }
        else
        {
            M[str[i]]++;
        }
    }
    return M;
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    map<char, int>x1, x2;
    x1 = storeStringFrequency(s1);
    x2 = storeStringFrequency(s2);
    for(const auto & i : x2) {
        
    }

    return 0;
}