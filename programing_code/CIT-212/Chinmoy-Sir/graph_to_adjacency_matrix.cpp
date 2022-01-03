#include<bits/stdc++.h>
using namespace std;
int matrix[25][25];
int main()
{
    int node;
    cout << "Number of nodes: \n";
    cin >> node;

    for (int ii = 0; ii < node; ++ii)
    {
        cout << "Number of nodes connected to " << ii << ":\n";
        int edge;
        cin >> edge;
        for (int jj = 1; jj <= edge; ++jj)
        {
            cout << jj << " number node connected to " << ii << ": ";
            int u;
            cin >> u;
            matrix[ii][u] = 1;
            
        }
    }

    // character input thakle eda
    // char ch = 'a';
    // for (int ii = 1; ii <= node; ++ii)
    // {
        
    //     cout << "Number of nodes connected to " << ch << ":\n";
    //     int edge;
    //     cin >> edge;
    //     for (int jj = 1; jj <= edge; ++jj)
    //     {
    //         cout << jj << " number node connected to " << ch << ": ";
    //         char u;
    //         cin >> u;

    //         int x = ch - 'a';
    //         int y = u - 'a';
    //         matrix[x+1][y+1] = 1;
            
    //     }
    //     ch++;
    // }


    for (int ii = 0; ii < node; ++ii)
    {
        for (int jj = 0; jj < node; ++jj)
        {
            cout << matrix[ii][jj];
        }
        cout << "\n";
    }
}