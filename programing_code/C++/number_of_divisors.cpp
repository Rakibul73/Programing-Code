
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/27 14:13:04



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e6 + 5;
int cnt[N];
void storing_all_positive_natural_numbers_divisors() {
	for (int i = 1; i < N; i++) {
		for (int j = i; j < N; j += i) cnt[j]++;
	}
}
int number_divisors(int x) {
	return cnt[x];
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
    //in order to find many numbers divisors, call this 1st
    storing_all_positive_natural_numbers_divisors();
    //then for count the divisors of num = 4 call this
    int a = number_divisors(4);
    cout<<a<<"\n";

    
    //But if you need only one number's divisors , call this only
    int b = count_Divisors(4);
    cout<<b<<"\n";
    return 0;
}