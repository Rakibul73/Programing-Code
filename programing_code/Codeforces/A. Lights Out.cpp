#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3], arr1[3][3];
    for(int i = 0; i<3; i++) {
        for(int j= 0; j<3; j++) {
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<3; i++) {
        for(int j= 0; j<3; j++) {
            arr1[i][j] = 1;
        }
    }
    for(int i = 0; i<3; i++) {
        for(int j= 0; j<3; j++) {
            if (arr[i][j] %2 != 0) {
                if(arr1[i][j] == 1) {
                    arr1[i][j] =0;
                }
                else if(arr1[i][j] == 0) {
                    arr1[i][j] =1;
                }
                if(arr1[i+1][j] == 1 && i<2) {
                    arr1[i+1][j] =0;
                }
                else if(arr1[i+1][j] == 0 && i<2) {
                    arr1[i+1][j] =1;
                }
                if(arr1[i][j+1] == 1 && j<2) {
                    arr1[i][j+1] =0;
                }
                else if(arr1[i][j+1] == 0 && j<2) {
                    arr1[i][j+1] =1;
                }
                if(arr1[i][j-1] == 1 && j>0) {
                    arr1[i][j-1] =0;
                }
                else if(arr1[i][j-1] == 0 && j>0) {
                    arr1[i][j-1] =1;
                }
                if(arr1[i-1][j] == 1 && i>0) {
                    arr1[i-1][j] =0;
                }
                else if(arr1[i-1][j] == 0 && i>0) {
                    arr1[i-1][j] =1;
                }


            }
        }
    }
    for(int i = 0; i<3; i++) {
        for(int j= 0; j<3; j++) {
            cout<<arr1[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;

}

