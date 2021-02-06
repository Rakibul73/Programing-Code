
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n, input,five= 0,zero=0;
    long long fi = 0;
    cin>>n;
    for(long long int i=1;i <=n; i++) {
        cin>>input;
        if(input==5) {
            five++;
            fi=fi+5;
        }
    }
    zero = n-five;
    if(zero==0) {
        cout<<"-1"<<endl;
    }
    else {
        int p=0;
        while(fi) {
            if(fi%9==0) {
                p=1;
                fi=fi/5;
                break;
            }
            fi=fi-5;
        }
        for( int j = 1; j<=fi; j++) {
            cout<<"5";
        }
        if (fi == 0) {
            cout<<"0";
        }
        else {
            for( int j = 1; j<=zero; j++) {
                cout<<"0";
            }
        }
        cout<<endl;
    }

    return 0;
}