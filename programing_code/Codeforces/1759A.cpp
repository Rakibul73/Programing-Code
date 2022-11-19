/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2022/11/15 20:58:40



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
    string ss;
    cin>>ss;
    //  esY, YesYes, sYes, e, but you couldn't Yess, YES or se.
    if(ss[0] == 'e')  {
        for (int i = 3; i < ss.size(); i = i+3)
        {
            if(ss[i] != 'e'){
                printf("NO\n");
                
                return;
            }
        }
        for (int i = 1; i < ss.size(); i = i+3)
        {
            if(ss[i] != 's'){
                printf("NO\n");
                return;
            }
        }
        for (int i = 2; i < ss.size(); i = i+3)
        {
            if(ss[i] != 'Y'){
                printf("NO\n");
                return;
            }
        }
        printf("YES\n");
        return;
    }
    else if(ss[0] == 's')  {
        for (int i = 3; i < ss.size(); i = i+3)
        {
            if(ss[i] != 's'){
                printf("NO\n");
                return;
            }
        }
        for (int i = 1; i < ss.size(); i = i+3)
        {
            if(ss[i] != 'Y'){
                printf("NO\n");
                return;
            }
        }
        for (int i = 2; i < ss.size(); i = i+3)
        {
            if(ss[i] != 'e'){
                printf("NO\n");
                return;
            }
        }
        printf("YES\n");
        return;
    }
    else if(ss[0] == 'Y')  {
        for (int i = 3; i < ss.size(); i = i+3)
        {
            if(ss[i] != 'Y'){
                printf("NO\n");
                return;
            }
        }
        for (int i = 1; i < ss.size(); i = i+3)
        {
            if(ss[i] != 'e'){
                printf("NO\n");
                return;
            }
        }
        for (int i = 2; i < ss.size(); i = i+3)
        {
            if(ss[i] != 's'){
                printf("NO\n");
                return;
            }
        }
        printf("YES\n");
        return;
    }

    printf("NO\n");
    return;

    // if(ss[0] == 'e') {
    //     cout<<"YES\n";
    //     return;
    // }
    // else if (ss[0] == 'Y' && ss[1] == 'e' && ss[2] == 's' && ss[3] == 's') {
    //     printf("NO\n");
    //     return;
    // }
    // else if(ss[0] == 'Y' && ss[1] == 'E' && ss[2] == 'S' ) {
    //     cout<<"NO\n";
    //     return;
    // }
    // else if(ss[0] == 's' && ss[1] == 'e') {
    //     cout<<"NO\n";
    //     return;
    // }
    // else if (ss[0] == 's' && ss[1] == 'Y') {
    //     cout<<"YES\n";
    //     return;
    // }
    // else if (ss[0] == 'Y' && ss[1] == 'e' && ss[2] == 's' && ss[3] == 'Y') {
    //     cout<<"YES\n";
    //     return;
    // }
    // else if (ss[0] == 'Y' && ss[1] == 'e' && ss[2] == 's') {
    //     cout<<"YES\n";
    //     return;
    // }
    // else {
    //     cout<<"NO\n";
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