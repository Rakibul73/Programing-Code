/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2022/11/22 19:14:09



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
    long long n;
    cin>>n;
    vector<long long> hayre_kopal(n), balermata(n), bra_size;
    for (long long i = 0; i < n; i++)
    {
        cin>>hayre_kopal[i];
    }
    

    long long zerooo = 0, summmm = 0;
    for (long long i = n - 1; i >= 0; i--)
    {
        if(hayre_kopal[i] == 1) {
            summmm = summmm + (zerooo);
        }
        else if(hayre_kopal[i] == 0) {
            zerooo++;
        }
    }
    bra_size.push_back(summmm);

    for (long long i = 0; i < n; i++)
    {
        balermata = hayre_kopal;
        balermata[i] == 0? balermata[i] = 1: balermata[i] = 0;
        long long zerooo = 0, summmm = 0;
        for (long long i = n - 1; i >= 0; i--)
        {
            if(balermata[i] == 1) {
                summmm = summmm + (zerooo);
            }
            else if(balermata[i] == 0) {
                zerooo++;
            }
        }
        bra_size.push_back(summmm);
    }
    
    sort(bra_size.begin(), bra_size.end());
    cout<<bra_size[bra_size.size()-1]<<"\n";

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