/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2022/12/16 21:45:32



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
    long long x1 , x2 , x3 , y1 , y2 , y3 , input;
    //cin>>input;
    // cin>>x1>>y1;
    // cin>>x2>>y2;
    // cin>>x3>>y3;
    vector <long long> a(3) , b(3);
    for (long long i = 0; i < 3; i++)
    {
        cin>>a[i]>>b[i];
    }
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    // for (long long i = 0; i < 3; i++)
    // {
    //     if(a[i] == a[i+1]) || (a[i])
    // }
    if((a[0] == a[1]) || (a[1] == a[2])) {
        if((b[0] == b[1]) || (b[1] == b[2])) {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
    
    

    // if(x2 == x3) {
    //     if(y2 == y1) {
    //         if(x1 == y3) {
    //             cout<<"NO\n";
    //             return;
    //         }
    //         cout<<"YES\n";
    //         return;
    //     }
    //     if(y3 == y1) {
    //         if(x1 == y2) {
    //             cout<<"NO\n";
    //             return;
    //         }
    //         cout<<"YES\n";
    //         return;
    //     }
    //     cout<<"YES\n";
    //     return;
    // }
    // if(x2 == x1) {
    //     if(y2 == y3) {
    //         if(x3 == y1) {
    //             cout<<"NO\n";
    //             return;
    //         }
    //         cout<<"YES\n";
    //         return;
    //     }
    //     if(y3 == y1) {
    //         if(x3 == y2) {
    //             cout<<"NO\n";
    //             return;
    //         }
    //         cout<<"YES\n";
    //         return;
    //     }
    //     cout<<"YES\n";
    //     return;
    // }
    // if(x3 == x1) {
    //     if(y2 == y1) {
    //         if(x2 == y3) {
    //             cout<<"NO\n";
    //             return;
    //         }
    //         cout<<"YES\n";
    //         return;
    //     }
    //     if(y3 == y2) {
    //         if(x2 == y1) {
    //             cout<<"NO\n";
    //             return;
    //         }
    //         cout<<"YES\n";
    //         return;
    //     }
    //     cout<<"YES\n";
    //     return;
    // }
    // cout<<"YES\n";
    // return;

    // double a = sqrt((abs(x1 - x2)* abs(x1 - x2)) - (abs(y1 - y2)* abs(y1 - y2)));
    // double b = sqrt((abs(x3 - x2)* abs(x3 - x2)) - (abs(y3 - y2)* abs(y3 - y2)));
    // double c = sqrt((abs(x1 - x3)* abs(x1 - x3)) - (abs(y1 - y3)* abs(y1 - y3)));
    // double s = (a+b+c)/2;
    // double area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    // if((1 == (a/b)) || (1 == (b/a))  || (1 == (a/c)) || (1 == (c/a)) || (1 == (c/b)) || (1 == (b/c)) ) {
    //     cout<<"YES\n";
    //     return;
    // }
    // else {
    //     cout<<"NO\n";
    //     return;
    // }

    

    // if( y1 == y2) {
    //     // if(x3 > x1 && x3 < x2) {
    //     //     cout<<"YES\n";
    //     //     return;
    //     // }
    //     // if(x3 < x1 && x3 > x2) {
    //     //     cout<<"YES\n";
    //     //     return;
    //     // }
    //     if((x1 == x3) || (x2 == x3)) {
    //         cout<<"NO\n";
    //         return;
    //     }
    //     cout<<"YES\n";
    //     return;
    // }
    // if( y1 == y3) {
    //     if((x1 == x2) || (x3 == x2)) {
    //         cout<<"NO\n";
    //         return;
    //     }
    //     cout<<"YES\n";
    //     return;
    // }
    // if( y3 == y2) {
    //     // if(x3 > x1 && x3 < x2) {
    //     //     cout<<"YES\n";
    //     //     return;
    //     // }
    //     // if(x3 < x1 && x3 > x2) {
    //     //     cout<<"YES\n";
    //     //     return;
    //     // }
    //     if((x1 == x3) || (x2 == x1)) {
    //         cout<<"NO\n";
    //         return;
    //     }
    //     cout<<"YES\n";
    //     return;
    // }
    // cout<<"YES\n";
    // return;

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