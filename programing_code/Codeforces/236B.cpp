
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/27 14:23:13



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e6 + 5;
int cnt[N];
void init() {
	for (int i = 1; i < N; i++) {
		for (int j = i; j < N; j += i) cnt[j]++;
	}
}

int paisi_number_divisors(int x) {
	return cnt[x];
}

int add(int x, int y) {
	
	return x+y;
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    init();
    int a, b, c;
    long long sum = 0;
    cin>>a>>b>>c;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                sum = add(sum, paisi_number_divisors( i*j*k ));
            }
        }
    }
    
    cout<<sum<<"\n";
    return 0;
}