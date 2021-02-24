
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/24 12:51:54



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
long long INFF = 1000000000000000005LL;

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        int n, big = -1,index, index1;
        cin>>n;
        vector<int> p(n), q;
        for (int i = 0; i < n; i++)
        {
            cin>>p[i];
            if(big < p[i]) {
                big = p[i];
                q.push_back(i);
            }
        }
        reverse(q.begin(), q.end());
        int r=n;
        for(auto x: q){
            for(int i = x; i < r; i++){
                cout<<p[i]<<" ";
            }
            r=x;
        }




        cout<<"\n";
        t--;
    }
    
    
    return 0;
}