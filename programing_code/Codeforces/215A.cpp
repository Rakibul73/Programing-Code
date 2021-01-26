
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n , m, input, high=0;
    vector<int > a, b;
    cin>>n;
    for(int i = 0; i<n; i++) {
        cin>>input;
        a.push_back(input);
    }
    cin>>m;  
    for(int i = 0; i<m; i++) {
        cin>>input;
        b.push_back(input);
    }
    int max = 0;
    for(int i = 0; i<n; i++) {
        for(int j = m-1; j>=0; j--) {
            if (b[j]%a[i]==0) {
                if (b[j]/a[i] > max) {
                    max=b[j]/a[i];
                    high=1;
                }
                else if (b[j]/a[i] == max) {
                    high++;
                }
            }
        }
    }

    cout<<high<<endl;



    return 0;
}