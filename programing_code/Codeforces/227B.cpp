
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
	int n, x, arr1[100000];
	cin>>n;
	for (int i = 1; i <= n; ++i)
	{
	    cin>>x;
        arr1[x] = i;
	}
    int m, y;
	cin>>m;
    long long v=0, p=0;
    while (m--)
    {
        cin>>y;
        v += arr1[y];
        p += (n + 1 - arr1[y]);
    }
	cout<< v<<" "<<p<<endl;
	return 0;
}