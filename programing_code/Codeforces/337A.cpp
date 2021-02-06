
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n,m,input;
    vector <int> a;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>input;
        a.push_back(input);
    }
    sort(a.begin(), a.end());
    int count = m-n;
    int min=10000;
    for (int i = 0; i <= count; i++)
    {
        if((a[i+(n-1)] - a[i]) < min ) {
            min = a[i+(n-1)] - a[i];
        } 
    }
    cout<<min<<endl;
    
    
    return 0;
}