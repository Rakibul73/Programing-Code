
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin>>t;
    while (t)
    {
        int n, k, input;
        cin>>n>>k;
        vector<int>arr;
        for (int i = 0; i < n; i++)
        {
            cin>>input;
            arr.push_back(input);
        }
        int count;
        for (int i = 1; i <= k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j+1 == n) {
                    count=-1;
                    continue;
                }
                else if (arr[j] >= arr[j+1])
                {
                    continue;
                }
                else
                {
                    arr[j]++;
                    count = j+1;
                    break;
                }
                
            }
            
            if (count == -1)
            {
                break;
            }
            
            
        }
        cout<<count<<"\n";
        





        t--;
    }
    
    return 0;
}