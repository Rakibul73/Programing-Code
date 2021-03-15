
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/15 22:09:48



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve(vector<long long> a, int n) {
    int l = 0, r = n-1;
    bool ff = true, rr = true;
    while (l < r)
    {
        if(a[l] < a[l+1] && ff) {
            l = l+1;
        }
        else if(a[l] > a[l+1] && ff) {
            ff = false;
        }
        if(a[r-1] < a[r] && rr) {
            r = r-1;
        }
        else if(a[r-1] > a[r] && rr) {
            rr = false;
        }
        if(!ff && !rr) {
            break;
        }
    }
    if(l >= r) {
        cout<<"yes\n";
        cout<<"1 1\n";
        return;
    }
    else {
        reverse(a.begin() + l, a.begin() + (r+1));
        for (int i = 0; i < n-1; i++)
        {
            if(a[i] > a[i+1]) {
                cout<<"no\n";
                return;
            }
        }
        cout<<"yes\n";
        cout<<l+1<<" "<<r+1<<"\n";
        return;
    }
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    int n;
    cin>>n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    solve(a, n);
    
    
    
    return 0;
}