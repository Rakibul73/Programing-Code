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

void remove_duplicate_string(string& s) {
    s.erase(unique(s.begin(), s.end()), s.end());
}

void solve() {
    long long n , q;
    cin>>n>>q;
    vector<long long>bal(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>bal[i];
    }
    vector<long long>pre_sum;
    pre_sum.push_back(bal[0]);
    for (long long i = 1; i < n; i++)
    {
        pre_sum.push_back(pre_sum[i-1]+bal[i]);
    }
    reverse(bal.begin() , bal.end());
    vector<long long>ulda_pre_sum;
    ulda_pre_sum.push_back(bal[0]);
    for (long long i = 1; i < n; i++)
    {
        ulda_pre_sum.push_back(ulda_pre_sum[i-1]+bal[i]);
    }

    
    for (long long i = 0; i < q; i++)
    {
        long long l , r  ,k , sum = 0;
        cin>>l>>r>>k;
        sum = k*(r-l+1);
        if(l > 1) {
            sum = sum + pre_sum[l-2];
        }
        if(r != n) {
            sum = sum + ulda_pre_sum[n-r-1];
        }
        
        
        if(sum % 2 == 0 ) {
            cout<<"NO\n";
        }
        else {
            cout<<"YES\n";
        }
    }
    
    

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