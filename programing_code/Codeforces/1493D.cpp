
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/07 02:33:48



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int x, y;
long M = 1000000007;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
int gcdExtended(int a, int b, int *x, int *y) 
{
    if (a == 0) 
    { 
        *x = 0; 
        *y = 1; 
        return b; 
    }
    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - ((b/a) * x1)%M; 
    *y = x1; 
 
    return gcd; 
} 

int borogcd(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = (gcdExtended(arr[i], result, &x, &y)); 
        if(result == 1) 
        { 
            return 1; 
        } 
    } 
    return result; 
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n ,q;
    cin>>n>>q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int j = 0; j < q; j++)
    {
        int i , x;
        cin>>i>>x;
        a[i-1] = a[i-1]*x;
        int n = sizeof(a) / sizeof(a[0]);
        cout << borogcd(a, n) << "\n";


    }
    
    
    return 0;
}