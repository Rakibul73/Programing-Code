
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/06 06:38:58



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
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
int solve() {
    long long N, E, H, A , B, C;
    cin>>N>>E>>H>>A>>B>>C;
    int tk = 0, cpy;
    bool parbo = true;
    if(E == H) {
        cpy = E;
    }
    else if (E < H) {
        cpy = (H - E)/3;
    }
    else if(E > H) {
        cpy = (E - H)/2;
    }
    if (N > cpy)
    {
        return -1;
    }
    else {
        long long tk = 0;
        if(A < B && A < C) {
            if(E/2 == N) {
                tk = N*A;
                return tk;
            }
            tk = tk + (E/2)*A;
            E = E % 2;
            N = N - (E/2);
            if(B < C) {
                if(H/3 == N) {
                    tk = tk + N*B;
                    return tk;
                }
                tk = tk + (H/3)*B;
                B = B % 3;
                N = N - (H/3);
                tk = tk + (N*C);
                return tk;
            }
            else {
                if(E/N >= 1 && H/N >= 1) {
                    tk = tk + N*C;
                    return tk;
                }
                N = N - E;
                tk = tk + (E*C);
                H = H - E;
                tk = tk + (N*B);
                return tk;
            }
        }
    }
    return -1;
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int T;
    cin>>T;
    while (T)
    {
        int z = solve();
        cout<<z<<"\n";
        T--;
    }
    
    
    return 0;
}