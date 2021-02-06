
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h>

using namespace std;
int main()
{
    int ar1[5][5], i, j, t, z;
    for(j = 0; j<5; j++) {
        for(i = 0; i<5; i++) {
            cin>>ar1[i][j];
        }
    }
    for(j = 0; j<5; j++) {
        for(i = 0; i<5; i++) {
            if (ar1[i][j] == 1) {
                goto end;
            }
        }
    }
    end:
    t  = i > 2 ? i-2 : 2-i;
    z  = j > 2 ? j-2 : 2-j;
    cout<<t+z<<endl;
    return 0;

}
