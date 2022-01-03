#include<bits/stdc++.h>
using namespace std;

int deleteElement(int arr[], int n, int x) {
    int i;
    for (i=0; i<n; i++) {
        if (arr[i] == x) {
            break;
        }
    }
    if (i < n) {
        n = n - 1;
        for (int j=i; j<n; j++) {
            arr[j] = arr[j+1];
        }
    }
    return n;
}

void printArray(int* arr, int n) {
    cout << "Traversing Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/* Driver program to test above function */
int main()
{
    int arr[100] = { 0 };
    int x, n;

    cout << "enter how many number you want to add : ";
    cin >> n;
    arr[n];
    cout << "Enter the number's with space: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array Befor deleting: ";
    printArray(arr, n);

    cout << "What number do you want to delete? = ";
    cin >> x;

    n = deleteElement(arr, n, x);

    cout << "Array After deleting: ";
    printArray(arr, n);

    return 0;
}
