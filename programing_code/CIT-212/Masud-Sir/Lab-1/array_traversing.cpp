#include <bits/stdc++.h>
using namespace std;

void printArray(int* arr, int n) {
    cout << "Traversing Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "enter how many number you want to add : ";
    cin >> n;
    int arr[n];
    cout << "Enter the number's with space: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    printArray(arr, n);

    return 0;
}
