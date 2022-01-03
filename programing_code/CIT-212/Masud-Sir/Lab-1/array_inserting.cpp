#include <bits/stdc++.h>
using namespace std;

int insert(int n, int arr[], int x, int pos) {
	int i;
	n++;
	for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
	arr[pos - 1] = x;
	return n;
}

void printArray(int* arr, int n) {
    cout << "Traversing Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n;

    cout << "enter how many number you want to add : ";
    cin >> n;
    arr[n];
    cout << "Enter the number's with space: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array Befor inserting: ";
    printArray(arr, n);

    cout << "What number do you want to add? = ";
    cin >> x;
    cout << "What position from do you want to add? = ";
    cin >> pos;

    n = insert(n, arr, x, pos);

    cout << "Array After inserting: ";
    printArray(arr, n);

    return 0;
}
