
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2022/01/09 23:53:03



#include <bits/stdc++.h> // Include every standard library 
using namespace std; 

int main() 
{ 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 

    int ball;
    cin >> ball;
    int x, y;
    cin >> x >> y;
    if(ball == x) {
        ball = y;
    }
    else if(ball == y) {
        ball = x;
    }

    cin >> x >> y;
    if(ball == x) {
        ball = y;
    }
    else if(ball == y) {
        ball = x;
    }

    cin >> x >> y;
    if(ball == x) {
        ball = y;
    }
    else if(ball == y) {
        ball = x;
    }

    cout << ball << endl;
    return 0; 
} 
