/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2023/01/30 17:05:14



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

template<typename K, typename V>
std::pair<K,V> getMaximumValueInMap(const std::map<K,V> &map) {
    return *std::max_element(map.begin(), map.end(), [](std::pair<K,V> const &x, std::pair<K,V> const &y) {
        return x.second < y.second;
    });
}

void solve() {
    int n;
    cin>>n;
    int arr[n][n-1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            cin>>arr[i][j];
        }
    }

    map<int , int> vejal;
    for (int i = 0; i < n; i++)
    {
        vejal[arr[i][0]]++;
    }
    pair<int, int> pair = getMaximumValueInMap(vejal);
    cout << pair.first << " ";
    for (int i = 0; i < n; i++)
    {
        if(pair.first != arr[i][0]) {
            for (int j = 0; j < n-1; j++)
            {
                cout<<arr[i][j]<< " ";
            }
            cout<<"\n";
            return;
        }
    }

    
    // if(n%2 == 1) {
    //     int ei_porjonto = n/2;
    //     map<int , int> aa;
    //     for (int j = 0; j < ei_porjonto; j++)
    //     {
    //         map<int , int> vejal;
    //         for (int i = 0; i < n; i++)
    //         {
    //             vejal[arr[i][j]]++;
    //         }
    //         pair<int, int> pair = getMaximumValueInMap(vejal);
    //         cout << pair.first << " ";
    //         aa[pair.first]++;
    //     }
    //     vector<int>zzzz;
    //     for (int j = n-2; j >= n/2; j--)
    //     {
    //         map<int , int> vejal;
    //         for (int i = 0; i < n; i++)
    //         {
    //             vejal[arr[i][j]]++;
    //         }
    //         pair<int, int> pair = getMaximumValueInMap(vejal);
    //         zzzz.push_back(pair.first);
    //         aa[pair.first]++;
    //     }
    //     for (int i = 1; i <= n; i++)
    //     {
    //         if (aa.count(i) > 0) {
    //             continue;
    //         }
    //         else {
    //             cout<<i<<" ";
    //             break;
    //         }
    //     }
    //     for (int i = zzzz.size() - 1; i >= 0; i--)
    //     {
    //         cout<<zzzz[i]<<" ";
    //     }
    //     cout<<"\n";
    //     return;
    // }
    
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