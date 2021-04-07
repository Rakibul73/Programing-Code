
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/04/07 13:57:23



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n;
    cin>>n;
    vector<int> a(n);
    int cpy, codex;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 1) {
            cpy = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] == n) {
            codex = i;
            break;
        }
    }
    if (cpy > codex) {
        swap(cpy, codex);
    }
	if (cpy > ((n - 1) - codex)) {
        cpy = 0;
    }
	else {
        codex = n - 1;
    }
	cout<<codex - cpy<<"\n";
    
    
    return 0;
}