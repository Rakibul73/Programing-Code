
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2024/01/24 23:01:45

// https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150


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

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    int i = m-1, j = n-1, k = m+n-1;
    while ( i >= 0 && j >= 0 )
    {
        if(nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        else if(nums1[i] <= nums2[j])
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
        
    }

    while(j >= 0)
    {
        nums1[k] = nums2[j];
        k--;
        j--;
    }
    

}

void solve() {
    int m = 3, n = 3;
    vector<int> nums1  = {1,2,6,0,0,0};
    vector<int> nums2 = {2,3,5};
    // vector<int> nums1  = {2,3,5,0,0,0};
    // vector<int> nums2 = {1,2,6};
    
    merge(nums1, m, nums2, n);
    printf("After merging:\n");
    for (int i = 0; i < m+n; i++) {
        cout<<nums1[i]<<" ";
    }
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