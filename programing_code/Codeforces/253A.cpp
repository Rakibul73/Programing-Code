
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/26 18:01:22



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

int* GetBigInteger_by_string_input_to_int_array(string str) 
{ 
    int x = str.size(), a = 0; 
    int* arr = new int[str.size()]; 
    while (a != x) { 
        arr[a] = str[a] - '0'; 
        a++; 
    }
    return arr; 
    }

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // Below function is A fast IO program
    fast_cin();
    int n, m;
    cin>>n>>m;
    int mi = min(n,m);
    int mx = max(n,m);
    int j = mx - mi;
    char ac;
    if(n < m) {
        for (int i = 1; i <= mi+mi; i++)
        {
            if(i % 2 == 0) {
                cout<<"B";
            }
            else {
                cout<<"G";
            }
        }
    }
    else {
        for (int i = 1; i <= mi+mi; i++)
        {
            if(i % 2 == 0) {
                cout<<"G";
            }
            else {
                cout<<"B";
            }
        }
    }
    
    char ab;
    if(n > m) {
        ab = 'B';
    }
    else {
        ab = 'G';
    }
    for (int i = 0; i < j; i++)
    {
        cout<<ab;
    }
    cout<<"\n";
    
    
    
    return 0;
}