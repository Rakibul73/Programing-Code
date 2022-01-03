#include<bits/stdc++.h>
using namespace std;

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

int main()
{
    int arr[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int n = 20;
    selection(arr,n);
    int brr[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    insertion(brr,n);

    for(int i=0;i<n;i++)
    {
        cout<<brr[i]<<" ";
    }
}