#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,arr[100];
    double m;
    cin>>n>>m;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
        if(arr[i]<=m) {
            arr[i]=0;
        }
    }
    int pos;
    double y = 0;
    for (int i = 0 ; i< n; i++) {
        if (ceil(arr[i]/m) >= y ) {
            y= ceil(arr[i]/m);
            pos= i;
        }
    }




    cout<<pos+1<<endl;

    



}
