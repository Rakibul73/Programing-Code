#include<iostream>
using namespace std;
int main()
{
    int i, n, num, first, last, middle;
    cout << " ENter how namy num you want ? = ";
    cin >> n;
    int arr[n];
    cout<<"Enter " << n << " enter the number (in ascending order): ";
    for(i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"\nEnter Element to be Search: ";
    cin>>num;
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    int count = 0;
    while(first <= last)
    {
        count++;
        if(arr[middle]<num) {
            first = middle+1;
        }
        else if(arr[middle]==num)
        {
            cout<<"\nThe number, "<<num<<" found at Position "<<middle+1 << endl;
            cout << "count = " << count << endl;
            break;
        }
        else {
            last = middle-1;
        }
        middle = (first+last)/2;
    }
    if(first>last) {
        cout<<"\nThe number, "<<num<<" is not found in given Array" << endl;
        cout << "count = " << count << endl;
    }
    cout<<endl;
    return 0;
}