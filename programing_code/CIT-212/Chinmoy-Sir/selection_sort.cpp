#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
	int min_index;
	for (int i = 0; i < n-1; i++){
		min_index = i;
		for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        if(min_index != i) {
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }
}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++) {
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
    
    selectionSort(arr, n);

    cout << "\nAfter sort : ";
    printArray(arr, n);
    cout << endl;
    return 0;
}
