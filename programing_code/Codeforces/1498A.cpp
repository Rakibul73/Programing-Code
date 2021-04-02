
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/31 16:08:41



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

long long gcd_fast(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd_fast(b, a % b);
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        long long n;
        cin>>n;

        long long m = 0 , k = n;
        while (k)
        {
            m = m + (k % 10);
            k = k/10;
        }
        for (long long i = 0; i <= 10; i++)
        {
            if((n + i) % 10 == 0) {
                n = n + i;
                k = n;
                m = 0;
                while (k)
                {
                    m = m + (k % 10);
                    k = k/10;
                }
                i = 0;
                
            }
            long long l = gcd_fast(n + i, m + i);
            if(l > 1) {
                cout<<n + i<<"\n";
                break;
            }
            
        }
        


        t--;
    }
    
    return 0;
}