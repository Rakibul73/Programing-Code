#include <bits/stdc++.h>
using namespace std;

#define ALL(c) (c).begin(), (c).end()
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define pb push_back
#define N 100005
const int INF = 1e9;

int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

int main()
{
    int tst; cin >> tst;
    while(tst--){
        int n; cin >> n;
        int a[n];
        cin >> a[0] >> a[1] >> a[2];
        for(int i = 3; i < n; i++)cin >> a[i];
        if(a[0] != a[1]){
            if(a[1] == a[2])cout << 1;
            else cout << 2;
            cout << endl;
            continue;
        }
        if(a[1] != a[2]){
            if(a[0] == a[1])cout << 3;
            else cout << 2;
            cout << endl;
            continue;
        }
        int ans; bool ok = true;
        for(int i = 3; i < n; i++){
            if(a[i] != a[i-1] and ok)ans = i+1, ok = false;
        }
        cout << ans << endl;
    }
    return 0;
}
