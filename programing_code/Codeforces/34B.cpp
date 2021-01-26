
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n , m, input, sum=0;
    vector<int>a;
    cin>>n>>m;
    for(int i = 0; i<n; i++) {
        cin>>input;
        a.push_back(input);
    }
    sort(a.begin(), a.end());
    for (int i =0; i <m ; i++)
    {
        if(a[i] < 0) {
            sum = sum + -a[i];
        }
    }
    cout<<sum<<endl;    
    
    return 0;
}