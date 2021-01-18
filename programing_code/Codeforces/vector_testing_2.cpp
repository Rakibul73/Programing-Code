#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve() {
}
int main() {
    fast_cin();
    //ll t;
    vector<int> a;

    for(int i = 0; i< 10;i++) {
       a.push_back(i+1);
    }
    //showing vector "a" value
    for(int i= 0; i < a.size(); i++) {
        cout<<"i = "<<i<<" =="<<a[i]<<endl;
    }
    cout<<"-----remove value of 3 position--------"<<endl;
    //remove value of 3 position
    a.erase(a.begin()+2);

    //showing vector "a" remaining value
    for(int i= 0; i < a.size(); i++) {
        cout<<"i = "<<i<<" =="<<a[i]<<endl;
    }
    cout<<"------again removes 4 value (position 5 to position 8)--------"<<endl;
    
    //again removes 4 value (position 5 to position 8)
    a.erase(a.begin()+4, a.begin()+8);
    
    //showing vector "a" remaining value
    for(int i= 0; i < a.size(); i++) {
        cout<<"i = "<<i<<" =="<<a[i]<<endl;
    }



    cout<<"---------Start--------"<<endl;
    a.resize(20);
    for(int i = 10; i< a.size();i++) {      // "resize" r por "push_back" use kra jabe na
       a[i]=i+1;
    }
    cout<<"a.size() ="<<a.size()<<endl;
    for(int i= 0; i < a.size(); i++) {
        cout<<"i = "<<i<<" =="<<a[i]<<endl;
    }
    cout<<"---------Stop----------"<<endl;
    
    
    
    
    a.clear();  // a.clear() sudu vector "a" full value wipe kore,kintu code a besi clear use na kra valo,karon TLE
    cout<<"a.size() ="<<a.size()<<endl;

    a.resize(10);  // a.resize() vector "a" ke resize korbe age jotoi thakuk
    cout<<"a.size() ="<<a.size()<<endl;

    solve();
    return 0;
}