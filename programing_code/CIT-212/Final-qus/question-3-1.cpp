#include <bits/stdc++.h>
using namespace std;

int matrix[25][25];

int main() {
    int node;
    cout << "Enter Num of Nodes = ";
    cin >> node;
    cout << "Enter num of edges = ";
    int edge;
    cin >> edge;
    for (int i = 1; i <= edge; i++)
    {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
    }

    for (int i = 1; i <= node; i++)
    {
        for (int j = 1; j <= node; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    
}