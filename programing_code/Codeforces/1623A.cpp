
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2022/01/10 19:51:18



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n, m, robotN, robotM, dirtyN, dirtyM;
    cin >> n >> m >> robotN >> robotM >> dirtyN >> dirtyM;
    bool clean = false;

    if(robotN == dirtyN && robotM == dirtyM) {
        cout << "0" << endl;
        return;
    }
    if(robotN == dirtyN || robotM == dirtyM) {
        cout << "0" << endl;
        return;
    }

    bool paisi = false , M = true, N = true;
    int time = 0;
    if(robotM < dirtyM) {
        while (!paisi)
        {
            if(M == true && N == true) {
                if(robotM == m) {
                    robotM--;
                    robotN++;
                    M = false;
                }
                else if(robotN == n) {
                    robotM++;
                    robotN--;
                    N = false;
                }
                else if(robotM == m && robotN == n) {
                    robotM--;
                    robotN--;
                }
                else {
                    robotM++;
                    robotN++;
                }
            }
            else {
                if(M == false) {
                    robotM--;
                    robotN++;
                }
                else if (N == false) {
                    robotM++;
                    robotN--;
                }
            }

            time++;
            if(robotM == dirtyM || robotN == dirtyN) {
                paisi = true;
            }
        }
    }
    else {
        while (!paisi)
        {
            if(M == true && N == true) {

                if(robotM == m && robotN == n) {
                    robotM--;
                    robotN--;
                    M = false;
                    N = false;
                }
                else if(robotM == m) {
                    robotM--;
                    robotN++;
                    M = false;
                }
                else if(robotN == n) {
                    robotM++;
                    robotN--;
                    N = false;
                }
                else if(N == true && M == true) {
                    robotM++;
                    robotN++;
                }
            }
            else {
                if (N == false && M == false) {
                    robotM--;
                    robotN--;
                }
                else if(M == false) {
                    robotM--;
                    robotN++;
                }
                else if (N == false) {
                    robotM++;
                    robotN--;
                }
            }

            time++;
            if(robotM == dirtyM || robotN == dirtyN) {
                paisi = true;
            }
        }
    }

    cout << time << endl;

    
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int t;
    cin >> t;
    //t = 1;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    
    return 0;
}