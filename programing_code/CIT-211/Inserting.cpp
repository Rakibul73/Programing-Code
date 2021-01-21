
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include<bits/stdc++.h>

using namespace std;

void INSERT(int arr[], int N, int K, int ITEM) {

        for(int J=N; J>=K ; J--) {
            arr[J]=arr[J-1];
        }
        arr[K] = ITEM;
        N= N+1;

        for(int i=0;i<=N;i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

}

int main()
{
    int arr[] = {10,20,30,40};

    int N = 3;
    int K = 2;
    int ITEM = 50;

    INSERT(arr,N,K,ITEM);
}
