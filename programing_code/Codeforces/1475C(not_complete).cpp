
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h>
#include <utility>
using namespace std;
int nCr(int n, int k) 
{ 
    int res = 1; 
    if (k > n - k) 
        k = n - k;
    for (int i = 0; i < k; ++i) { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 
int main() {
    int t;
    cin>>t;
    while (t)
    {
        int a,b,k, input;
        cin>>a>>b>>k;
        vector< int> arr[k];
        for(int i=0; i<k; ++i) {
            cin>>input;
            arr[i].push_back(input);
        }
        for(int i=0; i<k; ++i) {
            cin>>input;
            arr[i].push_back(input);
        }
        pair<int, int> adjs[] = {};

        // int x = nCr(k,2);

        // int p = 0;
        // for (int i = 0; i < k; i++)
        // {
        //     for (int j = i+1; j < k; j++)
        //     {
        //         if (arr[i][0] == arr[j][0] || arr[i][1] == arr[j][1]) {
        //             continue;
        //         }
        //         else {
        //             p++;
        //         }
        //     }
        // }
        // cout<<p<<endl;
        

        t--;
    }
    
    return 0;
}