
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/17 18:44:37



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
long long factorial(long long n) 
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); 
}
long long fact(long long n);
long long nCr(long long n, long long r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
}
long long fact(long long n) 
{ 
    long long res = 1; 
    for (long long i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 
int nprfact(int n) 
{ 
    if (n <= 1) 
        return 1; 
    return n*nprfact(n-1); 
} 

int nPr(int n, int r) 
{ 
    return nprfact(n)/nprfact(n-r); 
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    long long N, M, K;
    cin>>N>>M>>K;
    long long e = (K/2);
    long long d = K%2;
    long long c = (M/2);
    long long b = M%2;
    long long a = N - (e+d+b+c);

    long long r = 5;
    if(e == 0) {
        r--;
    }
    if(a == 0) {
        r--;
    }
    if(b == 0) {
        r--;
    }
    if(c == 0) {
        r--;
    }
    if(d == 0) {
        r--;
    }
    
    long long n = a+b+c+d+e;
    long long ans =  nPr(n , r);
    cout<<ans<<"\n";
    

    
    return 0;
}