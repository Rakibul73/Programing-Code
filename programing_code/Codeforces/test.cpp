/* In the name of *Allah*
 *   Thank You *Parsa*  */

//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O2")
//#pragma GCC optimization ("unroll-loops, fast-math")

#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<ios>
#include<iomanip>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<queue>
#include<numeric>
using namespace std;

#define pb push_back
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define Setprecision(x) cout << fixed << setprecision(x);
#define print(x) cerr << '\n' << (#x) << " is " << (x) << '\n';

typedef vector <int> VI;
typedef vector <long long> VLL;
typedef pair <int, int> PII;
typedef set <int> SI;
typedef set <long long> SLL;
typedef long long ll;

const int inf_int = 1 << 30;
const ll inf_longlong = 1LL << 62;
const ll MOD = 1073741824;

const int N = 1e6 + 5;
int a, b, c;
int ans;
int cnt[N];

void init() {
	for (int i = 1; i < N; i++) {
		for (int j = i; j < N; j += i) cnt[j]++;
	}
}

inline int add(int x, int y) {
	ll out = x;
	out += y;
	if (out >= MOD) out -= MOD;
	return out;
}

int number_divisors(int x) {
	return cnt[x];
}

inline void read_input() {
	cin >> a >> b >> c;
}

inline void solve() {
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++) {
				ans = add(ans, number_divisors(i * j * k));
			}
		}
	}
	cout << ans;
}

inline void write_output() {
}

int main() {
	ios:: sync_with_stdio(false), cin.tie(0), cout.tie(0);
	init();

	int t = 1; //cin >> t;
	while (t--) {
		read_input(), solve(), write_output();
	}
	return 0;
}
// Thanks *Allah*