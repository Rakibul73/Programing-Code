#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int bd(int j)
{
    long int i, a, b=0;
    for(i=0; j!=0; ++i) {
		a=j%10;
		b=a*pow(2,i)+b;
		j=j/10;
	}
	return b;
}

int main()
{


	return 0;
}
