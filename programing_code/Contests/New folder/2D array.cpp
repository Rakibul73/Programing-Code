#include <iostream>

using namespace std;

int main()
{
    int arr[2][4]= {{1,2,3,4},
                    {4,5,6,7}};  //emne porer line ao lekha jay

    for(int i=0; i<2; i++) {
        for(int j=0; j<4; j++) {
            cout<< arr[i][j] <<"\t";
        }
        cout<<endl;
    }
}
