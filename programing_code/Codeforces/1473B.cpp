
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/20 14:25:05



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
long long gcd_fast(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd_fast(b, a % b);
}
long long lcm_calculate_for_two_num (long long a, long long b) {
    long long c = gcd_fast(a, b);
    return (a*b)/c;
}


int main() {
    // Below function is A fast IO program
    fast_cin();
    int q;
    cin>>q;
    while (q)
    {
        string s, t, a, b;
        cin>>s;
        cin>>t;
        int x = s.size() , y = t.size();
        int lcm = lcm_calculate_for_two_num(x, y);
        a.append(s);
        b.append(t);
        while ( lcm != a.size() )
        {
            a.append(s);
        }
        while ( lcm != b.size())
        {
            b.append(t);
        }
        if (a == b) {
            cout<<a<<"\n";
        }
        else {
            cout<<"-1"<<"\n";
        }
        q--;
    }
    
    
    return 0;
}