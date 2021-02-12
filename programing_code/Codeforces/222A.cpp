
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/12 17:50:37



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    int n,k, input;
    cin>>n>>k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin>>input;
        a.push_back(input);
    }
    int count = 0;
    if (adjacent_find( a.begin(), a.end(), not_equal_to<>() ) == a.end())
    {
        cout<<count<<"\n";
    }
    
    else if (n == k)
    {
        cout<<n-1<<"\n";
    }
    else if (( adjacent_find( a.begin(), a.end(), not_equal_to<>() ) != a.end() ) && k == 1 ) {
        cout<<"-1"<<"\n";
    }
    else {
        if ( adjacent_find( a.begin()+(k-1), a.end(), not_equal_to<>() ) != a.end() ) {
            count = -1;
        }
        else {
            while ( adjacent_find( a.begin(), a.end(), not_equal_to<>() ) != a.end() )
            {
                a.push_back(a[k-1]);
                a.erase(a.begin());
                count++;
                // if (/* condition */)
                // {
                //     count = -1;
                //     break;
                // }
            
            }
        }
        cout<<count<<"\n";
        
    }
    
    return 0;
}