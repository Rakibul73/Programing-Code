#include <bits/stdc++.h>
using namespace std;

int arr[25];

int main() {
    int n;
    cout << " enter the how many num you want ";
    cin >> n;

    cout << "enter the num with space = ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //sort
    int mx = arr[0];
    for (int i = 0; i < n; i++) {
        if(mx < arr[i]) {
            mx = arr[i];
        }
    }

    queue<int> digit[10];
    for (int i = 0; i < n; i++) {
        digit[0].push(arr[i]);
    }

    int ten = 1;
    while(mx != 0) {
        queue<int> temp[10];
        for (int i = 0; i < 10; i++) {
            while(!digit[i].empty()) {
                int cur_dig = digit[i].front() / ten;
                cur_dig = cur_dig % 10;
                temp[cur_dig].push(digit[i].front());
                digit[i].pop();
            }
        }
        for (int i = 0; i < 10; i++) {
            while(!temp[i].empty()) {
                digit[i].push(temp[i].front());
                temp[i].pop();
            }
        }


        mx = mx / 10;
        ten = ten * 10;
    }

    for (int i = 0; i < 10; i++) {
        while(!digit[i].empty()) {
            cout << digit[i].front() << " ";
            digit[i].pop();
        }
    }
}