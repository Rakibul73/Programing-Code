
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr2 [3], arr[3];
	cin>>arr[0]>>arr[1]>>arr[2];
	for (int i = 0; i < 3; ++i) {
        arr2[i] = arr[i];
	}
	int n = sizeof(arr2) / sizeof(arr2[0]);
	sort(arr2, arr2 + n);
	for (int i = 0; i < n; ++i) {
        cout << arr2[i] <<endl;
	}
	cout<<endl;
	for (int i = 0; i < 3; ++i) {
        cout << arr[i] <<endl;
	}


	return 0;
}
