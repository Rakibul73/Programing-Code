/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2024/02/05 22:54:14



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
bool canJump(vector<int>& nums) {
    bool paisi = false;
    int besi = 2;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if(nums[i] > 0 && paisi == false) {
            continue;
        }
        if(nums[i] == 0 && paisi == false) {
            paisi = true;
            besi = 2;
            continue;
        }
        if(paisi == true && besi <= nums[i]) {
            besi = 2;
            paisi = false;
            continue;
        }
        if(paisi == true && besi > nums[i]) {
            besi++;
            continue;
        }
    }
    if(paisi == false && besi == 2) {
        return true;
    }
    return false;
}
void solve() {
    vector<int> nums = {2,3,1,1,4};
    // vector<int> nums = {80 , 2 , 0 , 4 ,0,1,0,4};
    bool ans = canJump(nums);
    cout<<ans<<endl;
    return;

}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    // cin >> t;
    t = 1;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    
    return 0;
}