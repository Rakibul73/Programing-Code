#include<bits/stdc++.h>
using namespace std;
int arr[1005];
void radix(int n)
{
    int mx = arr[0];
    for (int ii = 0; ii < n; ++ii)
        if (arr[ii] > mx)
            mx = arr[ii];

    queue<int> digit[10];
    for (int ii = 0; ii < n; ++ii)
        digit[0].push(arr[ii]);
    int ten = 1;
    while(mx!=0)
    {
        queue<int> temp[10];
        for (int ii = 0; ii < 10; ++ii)
        {
            while(!digit[ii].empty())
            {
                int cur_dig = digit[ii].front() / ten;
                cur_dig = cur_dig % 10;
                temp[cur_dig].push(digit[ii].front());
                digit[ii].pop();
            }
        }
        for (int ii = 0; ii < 10; ++ii)
        {
            while(!temp[ii].empty())
            {
                digit[ii].push(temp[ii].front());
                temp[ii].pop();
            }
        }
        mx /= 10;
        ten = ten * 10;
    }
    for (int ii = 0; ii < 10; ++ii)
    {
        while(!digit[ii].empty())
        {
            cout << digit[ii].front() << " ";
            digit[ii].pop();
         }
    }
    cout << "\n";
}
int main()
{
    int n;
    cin >> n;
    for (int ii = 0; ii < n; ++ii)
        cin >> arr[ii];
    radix(n);
}