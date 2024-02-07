/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2024/02/07 16:27:47



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int INF = 1000000005;
long long INFF = 1000000000000000005LL;

// map<string, int> strFreqMap = vector_TO_map_With_Freq(strVec);
template<typename T>
map<T, int> vector_TO_map_With_Freq(const vector<T>& vec) {
    map<T, int> freqMap;
    for (const T& element : vec) {
        freqMap[element]++;
    }
    return freqMap;
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

void remove_consecutive_duplicate_string(string& s) {
    s.erase(unique(s.begin(), s.end()), s.end());
}

void solve() {
    long long n , m , k;
    cin>>n>>m>>k;
    vector<long long> a(n) , b(m) , ans , ans2 , ans3;
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (long long i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    ////////////////////////////
    for (long long i = 0; i < n; i++)
    {
        if(a[i] <= k) {
            ans.push_back(a[i]);
            ans3.push_back(a[i]);
        }
    }
    sort(ans.begin() , ans.end());
    auto it = unique(ans.begin(), ans.end());
    ans.resize(distance(ans.begin(), it));

    ////////////////////////////
    for (long long i = 0; i < m; i++)
    {
        if(b[i] <= k) {
            ans2.push_back(b[i]);
            ans3.push_back(b[i]);
        }
    }
    sort(ans2.begin() , ans2.end());
    auto it2 = unique(ans2.begin(), ans2.end());
    ans2.resize(distance(ans2.begin(), it2));

    sort(ans3.begin() , ans3.end());
    auto it3 = unique(ans3.begin(), ans3.end());
    ans3.resize(distance(ans3.begin(), it3));
    
    if(ans3.size() == k && ans.size() >= k/2 && ans2.size() >= k/2) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
    return;

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