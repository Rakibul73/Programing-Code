
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/04/05 14:14:58



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool isPalindrome(string str)
{
    int l = 0;
    int h = str.size() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}

void solve2() {
    string s, temp1, temp2;
    cin>>s;
    for (long long i = 0; i < s.size(); i++)
    {
        if(s[i] != 'a') {
            temp1 = s;
            temp1.insert(0 , "a");
            if (!isPalindrome(temp1)) {
                cout<<"YES\n";
                cout<<temp1<<"\n";
                return;
            }
            temp2 = s;
            temp2.insert(s.size() , "a");
            cout<<"YES\n";
            cout<<temp2<<"\n";
            return;
        }
    }
    cout<<"NO\n";
    return;
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        // solve();
        solve2();
        

        
        t--;
    }
    
    
    return 0;
}