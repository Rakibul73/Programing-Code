
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/01 14:13:07



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n;
	cin>>n;
	int a, b;
	int x = 0, y = 0, count = 0;
	for(int i = 0; i < n; i++){
		cin>>a>>b;
		x = x + a;
	    y = y + b;
		if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0)) {
            count++;
        }
		
	}
	if (x % 2 == 0 && y % 2 == 0) {
        cout<<"0"<<"\n";
    }
	else if ((x & 1) && (y & 1) && count) {
        cout<<"1"<<"\n";
    }
	else {
        cout<<"-1"<<"\n";
    }
	
	
    
    return 0;
}