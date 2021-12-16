#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
	return max;
}

void countSort(int arr[], int n, int div)
{
	int output[n];
	int i, count[10] = { 0 };
	for (i = 0; i < n; i++) {
        count[(arr[i] / div) % 10]++;
    }

	for (i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

	for (i = n - 1; i >= 0; i--) {
		output[count[(arr[i] / div) % 10] - 1] = arr[i];
		count[(arr[i] / div) % 10]--;
	}
	for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixsort(int arr[], int n)
{
	int max = getMax(arr, n);
	for (int div = 1; max / div > 0; div = div * 10) {
        countSort(arr, n, div);
    }
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
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
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "\nBefore sort : ";
    printArray(arr, n);
    
    radixsort(arr, n);

    cout << "\nAfter sort : ";
    printArray(arr, n);
    cout << endl;
    return 0;
}
