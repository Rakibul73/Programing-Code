#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(void)
{
    string arr, z;
    int n, i, j, k, a, b;
    cin >> arr;
    n = arr.length();
    if (n > 4)
    {
        for (i = 0; i < n - 4; i++)
        {
            if ('h' == arr[i])
            {
                for (j = i + 1; j < n - 3; j++)
                {
                    if ('e' == arr[j])
                    {
                        for (k = j + 1; k < n - 2; k++)
                        {
                            if ('l' == arr[k])
                            {
                                for (a = k + 1; a < n - 1; a++)
                                {
                                    if ('l' == arr[a])
                                    {
                                        for (b = a + 1; b < n; b++)
                                        {
                                            if ('o' == arr[b])
                                            {
                                                z = "YES";
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        z = "NO";
    }
    if (z == "YES")
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
