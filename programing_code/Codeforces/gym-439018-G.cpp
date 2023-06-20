/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2022/11/22 19:13:25



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

// Function to find all possible sums
vector<long long> subsetSum(vector<long long>& arr) {
    // Calculate the maximum possible sum based on the absolute value of the input numbers
    long long maxSum = 0;
    for (auto num : arr) {
        maxSum += abs(num);
    }

    // Initialize a vector of booleans to store the possible sums
    vector<bool> dp(maxSum + 1, false);
    dp[0] = true;

    // Iterate through the array and update the dp vector
    for (int i = 0; i < arr.size(); i++) {
        for (int j = maxSum - abs(arr[i]); j >= 0; j--) {
            if (dp[j]) {
                dp[j + abs(arr[i])] = true;
            }
        }
    }

    // Convert the dp vector to a vector of long long integers and return it
    vector<long long> result;
    for (long long i = 1; i < dp.size(); i++) {
        if (dp[i]) {
            result.push_back(i);
        }
    }
    return result;
}


void remove_duplicate_string(string& s) {
    s.erase(unique(s.begin(), s.end()), s.end());
}

void solve() {
    long long n;
    cin>>n;
    vector<long long> xxx(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>xxx[i];
    }
    sort(xxx.begin() , xxx.end());

    long long P = xxx[0] , Q = 0;
    if( xxx[0] >= 0) {
        P = 0;
    }
    
    for (long long i = 0; i < n; i++)
    {
        if(xxx[i] > 0) {
            Q += xxx[i];
        }
    }
    

    vector<long long> result = subsetSum(xxx);

    for (long long i = 0; i < result.size(); i++)
    {
        result[i] = abs((result[i] * 2) - (P+Q));
    }

    sort(result.begin() , result.end());
    cout<<result[0]<<"\n";
    return;
    

}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    //cin >> t;
    t = 1;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    
    return 0;
}