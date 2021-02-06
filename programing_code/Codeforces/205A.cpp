
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n;
    long long x,input,pos;
    vector<int>a;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>input;
        a.push_back(input);
    }
    if (n==1) {
        cout<<n<<endl;
    }
    else {
        x=a[0];
        int c=1;
        pos=1;
        for (int i = 1; i < n; i++)
        {
            if(a[i] <x) {
                x=a[i];
                pos=i+1;
                c=1;
            }
            else if (a[i]==x) {
                c=2;
            }
        }
        if(c==1) {
            cout<<pos<<endl;
        }
        else {
            cout<<"Still Rozdil"<<endl;
        }
    }
    return 0;
}