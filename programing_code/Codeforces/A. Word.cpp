#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    int u=0 , l= 0;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            u++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            l++;
    }
    if(u<l || u == l) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout<<s<<endl;

}

