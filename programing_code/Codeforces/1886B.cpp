/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2023/10/10 18:36:01



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

double long distance_between_two_points(long long x1, long long y1, long long x2, long long y2) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}


void solve() {
    long long px, py, ax, ay , bx, by , ami_x = 0, ami_y = 0;
    cin>>px>>py;
    cin>>ax>>ay;
    cin>>bx>>by;

    double long a_to_ami = distance_between_two_points(ax, ay, ami_x, ami_y);
    double long b_to_ami = distance_between_two_points(bx, by, ami_x, ami_y);
    double long a_to_p = distance_between_two_points(ax, ay, px, py);
    double long b_to_p = distance_between_two_points(bx, by, px, py);
    double long a_to_b = distance_between_two_points(ax, ay, bx, by);
    
    // if(b_to_ami < a_to_ami && a_to_p > b_to_p) {
    //     if(b_to_ami < b_to_p) {
    //         cout<<b_to_p<<endl;
    //         return;
    //     }
    //     else {
    //         cout<<b_to_ami<<endl;
    //         return;
    //     }
    // }
    // if(a_to_ami < b_to_ami && a_to_p < b_to_p) {
    //     if(a_to_ami < a_to_p) {
    //         cout<<a_to_p<<endl;
    //         return;
    //     }
    //     else {
    //         cout<<a_to_ami<<endl;
    //         return;
    //     }
    // }

    double long arekta1 = max(b_to_p , b_to_ami);
    double long arekta2 = max(a_to_p , a_to_ami);
    double long arekta  = max(a_to_b/2.0 , max((min(a_to_ami , b_to_ami)) , (min(a_to_p , b_to_p))));
    cout<< setprecision(12)<<min(arekta ,(min(arekta1 , arekta2)))<<endl;

    return;





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