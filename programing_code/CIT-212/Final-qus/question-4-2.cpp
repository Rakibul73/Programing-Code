#include <bits/stdc++.h>
using namespace std;

int insertion_count = 0;
int selection_count = 0;

void insertion(int arr[],int n)
{
    int c =0;
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j=i-1;

        while(key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
            c++;
        }
        arr[j+1] = key;
    }
    printf("NO of Comparison %d in insertion sort\n",c);
}

void selection(int arr[],int n)
{
    int c = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                c++;
            }

        }
    }
    printf("NO of Comparison %d in selection sort\n",c);
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

    int arr1[n], arr2[n];
    cout << "Enter the number's with space = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    
    cout << "\nBefore sort : arr1 = ";
    printArray(arr1, n);
    cout << "\nBefore sort : arr2 = ";
    printArray(arr1, n);
    
    insertion(arr1, n);
    selection(arr2, n);

    cout << "After sort : arr1 = ";
    printArray(arr1, n);
    cout << "After sort : arr2 = ";
    printArray(arr1, n);
    cout << "insertion time = " << insertion_count << endl;
    cout << "selection time = " << selection_count << endl;

    cout << endl;
    return 0;
}
