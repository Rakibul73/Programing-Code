
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n];

    for(long long i = 0; i<n; i++) {
        cin>> arr[i];
    }


	long long z = sizeof(arr)/sizeof(arr[0]);

	sort(arr, arr+z);

    cout<< arr[n-1]*arr[n-2];


	return 0;
}
