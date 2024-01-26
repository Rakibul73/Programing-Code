/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2024/01/26 19:04:51



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



int coinChange(vector<int>& coins, int amount) {
    // Initialize a vector dp with size (amount + 1) and set all elements to (amount + 1)
    vector<int> dp(amount + 1, amount + 1);

    // Set the base case: the number of coins needed to make change for 0 is 0
    dp[0] = 0;

    // Iterate over each amount from 1 to the target amount
    for (int i = 1; i <= amount; i++) {
        // Iterate over each coin denomination in the coins vector
        for (int coin : coins) {
            // Check if the current coin denomination is less than or equal to the current amount
            if (coin <= i) {
                // Update the minimum number of coins needed to make change for the current amount
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    // If dp[amount] is still greater than amount, no valid combination was found, return -1; otherwise, return dp[amount]
    return dp[amount] > amount ? -1 : dp[amount];
}




void solve() {
    vector<int> coins = {186,419,83,408};
    // vector<int> coins = {1, 2, 5};
    // int amount = 11;
    int amount = 6249;
    cout << coinChange(coins, amount) << endl;
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