/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/19 14:17:57



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
        int n;
        cin>>n;
        vector<int> a;
        long long input;
        for (int i = 0; i < n; i++)
        {
            cin>>input;
            a.push_back(input);
        }
        bool flag = true;
        long long temp = 0;
        for (long long i = 0, j =1; i < n; j++, i++)
        {
            if( i != n-1 && a[i] > i) {
                temp = temp + (a[i] - i);
                a[i] = i;
            }
            else if (i != n-1 && a[i] == i) {
                continue;
            }
            else if (i != n-1 && a[i] < i && (temp + a[i]) < i) {
                flag = false;
                break;
            }
            else if (i != n-1 && a[i] < i && (temp + a[i]) > i) {
                temp = temp - (i - a[i]);
                a[i] = i;
            }
            else if (i != n-1 && a[i] < i && (temp + a[i]) == i) {
                a[i] = i;
                temp = 0;
            }
            else if ( i == n-1 && (temp + a[i]) < i) {
                flag = false;
                break;
            }
            else if ( i == n-1 && (temp + a[i]) >= i) {
                a[i] = a[i] + temp;
            }
        }
        


        if (flag) {
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }


        t--;
    }
    
    
    return 0;
}