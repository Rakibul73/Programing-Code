
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/26 17:42:45



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int* GetBigInteger_by_string_input_to_int_array(string str) 
{ 
	int x = str.size(), a = 0; 
	int* arr = new int[str.size()]; 
	while (a != x) { 
		arr[a] = str[a] - '0'; 
		a++; 
	}
	return arr; 
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int n;
    cin>>n;
    string a;
    cin>>a;
    int* arr = GetBigInteger_by_string_input_to_int_array(a);

    vector<int> c, b;
    for (int i = 0; i < n; i++)
    {
        b.push_back(arr[i]);
    }
    for (int i = n; i < 2*n; i++)
    {
        c.push_back(arr[i]);
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int z = 0;
    if(b[0] > c[0]) {
        for (int i = 1; i < n; i++)
        {
            if(b[i] < c[i]) {
                z = 1;
                break;
            }
            else if(b[i] == c[i]) {
                z = 1;
                break;
            }
        }
    }
    else if(b[0] < c[0]) {
        for (int i = 1; i < n; i++)
        {
            if(b[i] > c[i]) {
                z = 1;
                break;
            }
            else if(b[i] == c[i]) {
                z = 1;
                break;
            }
        }
    }
    else {
        z = 1;
    }
    
    if (z == 0) {
        cout<<"YES"<<"\n";
    }
    else {
        cout<<"NO"<<"\n";
    }
    
    
    return 0;
}