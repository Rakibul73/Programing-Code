
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Department of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



//#include <bits/stdc++. h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N, M, i, f, j, l = 0;
    scanf("%d %d", &N, &M);
    int arr1[N][2], arr2[M][2];
    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &arr1[i][0], &arr1[i][1]);
    }
    for (i = 0; i < M; i++)
    {
        scanf("%d %d", &arr2[i][0], &arr2[i][1]);
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            f = (arr2[j][1] - arr1[i][1]);
            if (f > 0)
            {
                if (l < f)
                {
                    l = f;
                }
            }
        }
    }

    printf("%d\n", l);
}
