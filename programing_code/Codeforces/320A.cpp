
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    string n;
    cin>>n;
    long long a = n.length();
    int pos= 0;

    for(int i = 0; i<a; i++) {
        if(n[i] == '1'){
	    	pos = 0;
			continue;
		}
		else if(n[i] == '4' && n[i-1] == '1' && a >= 2){
			pos = 0;
			continue;
		}
		else if(n[i] == '4' && n[i-1] == '4' && n[i-2] == '1' && a >=3){
			pos = 0;
			continue;
		}
		else {
			pos = 1;
			break;
	    }
    }
    if(pos == 1) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
    return 0;
}