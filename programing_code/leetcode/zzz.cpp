/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2024/01/24 19:20:56



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


vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    long long sum = 0 , a , b , i = 0 , j = nums.size() - 1 ;
    unordered_multimap<long long, long long> numMap;
    for (int i = 0; i <  nums.size(); i++) {
        numMap.insert({nums[i], i});
    }
    sort(nums.begin() , nums.end());
    
    
    while (i < j)
    {
        a = nums[i];
        b = nums[j];
        if(a + b == target) {
            ans.push_back(numMap.find(nums[i])->second);
            ans.push_back(numMap.find(nums[j])->second);
            break;

            
        }
        
        else if(a + b > target) {
            j--;
        }
        else {
            i++;
        }
    }
    
    return ans;
}
void solve() {
    vector<int> nums = {3,3};
    vector<int> ans = twoSum(nums, 6);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

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