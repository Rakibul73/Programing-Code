#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int matrix[20][20];
int count = 0;

void displayMatrix(int v) {
    int i, j;
    for(i = 0; i < v; i++) {
        for(j = 0; j < v; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void add_edge(int u, int v) {
    matrix[u][v] = 1;
}

int main(int argc, char* argv[]) {
    int v;
    cout << "input number of vertices: ";
    cin >> v;
    for (int i = 1; i <= v; i++)
    {
        int j;
        cout << "Edges of vertex " << i << " = ";
        cin >> j;
        for (int k = 1; k <= j; k++)
        {
            int u;
            cout << "link node of " << i << "_" << k << " = ";
            cin >> u;
            add_edge(i-1, u-1);
            // add_edge(i, u);  // jodi vertex 0 dia suru hoy taile eida use krte hoibo.. naile uprer da
        }
        
    }
    displayMatrix(v);

    return 0;
}