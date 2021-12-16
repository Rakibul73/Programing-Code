#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
	int key, j;
	for (int i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
	cout << endl;
}

int main()
{
	int n;
    cout << "how many num you want to sort ? = ";
    cin >> n;

    int arr[n];
    cout << "Enter the number's with space = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "\nBefore sort : ";
    printArray(arr, n);
    
    insertionSort(arr, n);

    cout << "\nAfter sort : ";
    printArray(arr, n);
    cout << endl;
    return 0;
}
