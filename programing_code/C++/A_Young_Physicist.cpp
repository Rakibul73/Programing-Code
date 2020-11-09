#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i , j, x = 0,y = 0,z = 0;
    cin>>n;
    int arr[n][3];
    for (i = 1; i<=n; i++) {
        for (j = 0; j<3; j++) {
            cin>>arr[i][j];
        }
    }

    for (i = 1, j = 0; i<=n; i++) {
        x = x + arr[i][j];
    }
    for (i = 1, j = 1; i<=n; i++) {
        y = y + arr[i][j];
    }
    for (i = 1, j = 2; i<=n; i++) {
        z = z + arr[i][j];
    }
    if (x == 0 && y == 0 && z == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;

}
