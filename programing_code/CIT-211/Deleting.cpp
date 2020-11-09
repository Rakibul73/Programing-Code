#include<bits/stdc++.h>

using namespace std;

void DELETE(int arr[], int N, int K, int ITEM) {

        for (int J=K; J < N; J++) {

            arr[J] = arr[J+1];

        }

        N= N-1;

        for(int i=0;i<=N;i++) {
            printf("%d  ", arr[i]);
        }

}

int main()
{
    int arr[] = {10,20,30,40};

    int N = 3;
    int K = 2;
    int ITEM = 30;

    DELETE(arr,N,K,ITEM);
}
