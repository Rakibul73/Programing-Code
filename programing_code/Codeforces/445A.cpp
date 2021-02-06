
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '-') {
                cout<<"-";
            }
            else if ((i + j) %2 == 0) {
                cout<<"B";
            }
            else  {
                cout<<"W";
            }
        }
        cout<<endl;
        
    }
    return 0;
}