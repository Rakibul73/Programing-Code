
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/21 22:01:09



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
int gcd_fast(int a, int b)
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
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        int n;
        cin>>n;
        vector<int > a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        set<int>codex;
        int count = 0;
        for (int i = 0; i < a.size() && count != a.size(); i++)
        {
            if(a.size()-1 == i) {
                
                if(gcd_fast(a[i], a[0]) == 1 ) {
                    codex.insert(i+1+1);
                    a.erase( a.begin() + 0 );
                    count = -1;
                }
                i = -1;

            }
            else if(gcd_fast(a[i], a[i+1]) == 1 ) {
                codex.insert(i+1+1);
                a.erase( a.begin() + (i+1) );
            }
            
            count++;
        }
        

        cout<<codex.size()<<" ";
        if(codex.size() != 0) {
            for (int i = 0; i < codex.size(); i++)
            {
                cout<<codex[i]<<" ";
            }
        }
        cout<<"\n";

        t--;
    }
    
    
    return 0;
}