/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2023/06/20 18:39:44



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

void remove_duplicate_string(string& s) {
    s.erase(unique(s.begin(), s.end()), s.end());
}

void solve() {
    int n;
    bool flag = true;
    cin>>n;
    vector<int> yoyo(n);
    for (int i = 0; i < n; i++)
    {
        cin>>yoyo[i];
        if(yoyo[i] >= n){
            flag = false;
        }
    }
    if(flag == false){
        cout<<"NO\n";
        return;
    }
    
    map< int , int>  milk_vita = vector_TO_map_With_Freq(yoyo);
    
    auto it = milk_vita.begin();
    int ager_Frequency = it->second;
    int ager_key = it->first;
    it++;
    
    while (it != milk_vita.end()) {
        if (it->second > ager_Frequency)  {
            cout<<"NO\n";
            return;
        }
        if (it->first != ager_key+1) {
            cout<<"NO\n";
            return;
        }
        
        ager_Frequency = it->second;
        ager_key = it->first;
        it++;
    }

    cout<<"YES\n";
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