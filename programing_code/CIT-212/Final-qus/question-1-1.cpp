#include <bits/stdc++.h>
using namespace std;


int insert(int n, string arr[], string s) {
	int i;
	n++;
	for (i = n-2; i >= 0; i--) {
        if(arr[i][0] > toupper(s[0])) {
            arr[i + 1] = (arr[i]);
        }
        else {
            break;
        }
    }
	arr[i + 1] = s;
	return n;
}

int deleteElement(int n, string arr[], string s) {
    int i;
    for (i=0; i<n; i++) {
        if (arr[i] == s) {
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

int main()
{
    string arr[8] = {"Brown", "Davis", "Johnson", "Smith", "Wanger"};
    int i, n = 5;

    cout << "Array given: = ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int loop = 1;
    while(loop) {
        cout << "1. Insert word" << endl;
        cout << "2. Delete word" << endl;
        cout << "3. Show string" << endl;
        cout << "4. Exit" << endl;
        int value;
        cin >> value;
        string s;

        switch (value) {
            case 1:
                cout << "Enter what word you want to add = ";
                cin >> s;
                n = insert(n, arr, s);
                break;
            case 2:
                cout << "Enter exact word you want to delete = ";
                cin >> s;
                n = deleteElement(n, arr, s);
                break;
            case 3:
                cout << "Array is: = ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 4:
                loop = 0;
                break;
            default:
                continue;
                break;
        }
    }


    return 0;
}
