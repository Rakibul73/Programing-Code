/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2023/01/03 21:17:51



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int INF = 1000000005;
long long INFF = 1000000000000000005LL;

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

int count_Divisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            if (n / i == i) 
                cnt++;
            else
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 

void solve() {
    long long n, count = 0;
    cin>>n;
    vector<char> bal(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>bal[i];
        if(bal[i] == 'L') {
            count++;
        }
    }
    if((count == n) || (count==0)) {
        cout<<"-1\n";
        return;
    }
    if(bal[0] == 'R' && bal[n-1] == 'L') {
        cout<<"0\n";
        return;
    }
    
    long long sum = 0;
    for (long long i = 0; i < n-1; i++)
    {
        if((bal[i] == 'L') && (bal[i+1] == 'R')) {
            cout<<i+1<<"\n";
            return;
        }
    }
    // long long bamer_r = 0, daner_l = 0;
    // for (long long i = 0; i < n; i++)
    // {
    //     if(bal[i] == 'R') {
    //         break;
    //     }
    //     bamer_r++;
    // }
    // for (long long i = n-1; i >= 0; i--)
    // {
    //     if(bal[i] == 'L') {
    //         break;
    //     }
    //     daner_l++;
    // }
    // cout<<bamer_r+ daner_l -1<<"\n";
    // return;
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin >> t;
    //t = 1;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    
    return 0;
}