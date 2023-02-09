#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ALL(s) (s).begin(), (s).end()
#define rALL(s) (s).rbegin(), (s).rend()
#define show(x) cout << #x << " : " << x << endl
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
template <class T>
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>; // indexed_set<ll> st;st.order_of_key(x);
const long long mod = 1e9 + 7;

int dx[]={0, 0, +1, -1};
int dy[]={+1, -1, 0, 0};

void solve(int tc)
{
  //cout << "Case " << tc << ": ";
  ll n;
  cin >> n;
  string s;
  cin >> s;
  set<char>x, y;
  ll left[n], right[n];
  for(int i=0; i<n; i++){
    x.insert(s[i]);
    left[i]=x.size();
  }
  for(int i=n-1; i>=0; i--){
    y.insert(s[i]);
    right[i]=y.size();
  }

  ll ans = 0;
  for(int i=0; i<n-1; i++){
    ll tem  = left[i]+right[i+1];
    ans = max(ans, tem);
  }
  cout <<ans << endl;
}

int main()
{
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
        solve(i);
}
