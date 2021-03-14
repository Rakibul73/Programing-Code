
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/13 17:49:13



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MAX_SIZE 10
int main() {
    // Below function is A fast IO program
    fast_cin();
    int a[MAX_SIZE][MAX_SIZE] = { { 4, 1, 3 }, 
                            { 9, 6, 2 }, 
                            { 5, 10, 7 } }; 

    int n = 3, m = 3;

    for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                for(int k = 0; k < m - 1 - j; k++){ 
                    if(a[k][i] > a[k + 1][i]){
                        int temp = a[k][i];
                        a[k][i] = a[k + 1][i];
                        a[k + 1][i] = temp;
                    }
                }
            }
        }
    


    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) 
            cout << a[i][j] << " "; 
        cout << endl; 
    } 



    return 0;
}