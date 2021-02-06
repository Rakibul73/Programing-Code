
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n, m, min=0, max=0, input, count=0;
    cin>>n>>m;
    vector<int> arr, arr2;
    for (int i = 0; i < m; i++)
    {
        cin>>input;
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end());
    arr2 = arr;
    for (int i = 0; i < m; i++)
    {
        while (arr[i])
        {
            min=min+arr[i];
            count++;
            if (count == n) {
                break;
            }
            
            arr[i]--;
        }
        if (count == n) {
                break;
        }
    }
    count=0;
    int i = m-1;
    while (i >= 0)
    {
        max=max+arr2[i];
        arr2[i]--;
        count++;
        if (count == n) {
            break;
        }
        sort(arr2.begin(), arr2.end());
    }



    cout<<max<<" "<<min<<endl;
    return 0;
}