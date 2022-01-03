#include <bits/stdc++.h>
using namespace std;

const long long mxn = 1e5 + 5;
const long long mod = 1e9 + 7;

int node;
int N = 1;
int Heap[1005];
void insertHeap(int key)
{
    int n = N;
    Heap[N++] = key;
    while (n > 1 && Heap[n] > Heap[n / 2])
    {
        swap(Heap[n / 2], Heap[n]);
        n /= 2;
    }
    return;
}
void push()
{
    int n = 1;
    while (2 * n < N)
    {
        if (2 * n + 1 < N)
        {
            int mx = max(Heap[2 * n], Heap[2 * n + 1]);
            if (mx < Heap[n])
                break;
            if (Heap[2 * n] == mx)
            {
                swap(Heap[2 * n], Heap[n]);
                n = 2 * n;
            }
            else
            {
                swap(Heap[2 * n + 1], Heap[n]);
                n = 2 * n + 1;
            }
        }
        else if (2 * n < N)
        {
            int mx = Heap[2 * n];
            if (mx < Heap[n])
                break;
            swap(Heap[2 * n], Heap[n]);
            n = 2 * n;
        }
    }
}
void display()
{
    int cnt = 0;
    int two = 0;
    cout << "Heap : ";
    while (N > 1)
    {
        ++cnt;
        if (cnt == (1 << two))
        {
            cout << "\n";
            ++two;
        }
        else
            cout << " ";
        cout << Heap[1] << " ";
        Heap[1] = Heap[--N];
        push();
    }
    cout << "\n\n";
}
void deleteHeap(int key)
{
    queue<int> keep;
    while (N > 1 && Heap[1] >= key)
    {
        if (key != Heap[1])
            keep.push(Heap[1]);
        Heap[1] = Heap[--N];
        push();
    }
    while (!keep.empty())
    {
        insertHeap(keep.front());
        keep.pop();
    }
    cout << "-> " << key << " Has Been Deleted from the Heap Successfully\n\n";
}
void sol()
{
    cout << "Number of the Nodes : \n";
    cin >> node;
    cout << "Enter " << node << " Heap Elements : \n";
    int List[node];
    for (int ii = 0; ii < node; ++ii)
    {
        cin >> List[ii];
        insertHeap(List[ii]);
        cout << "-> " << List[ii] << " Has Been Inserted Into the Heap Successfully\n";
    }
    cout << "\n";
    display();
    for (int ii = 0; ii < node; ++ii)
        insertHeap(List[ii]);
    cout << "Enter the Key You Wanna Delete From the Heap : \n";
    int key;
    cin >> key;
    deleteHeap(key);
    display();
}
int main()
{
    int tc = 1;
    // scanf("%d", &tc);
    while (tc--)
    {
        sol();
    }
}