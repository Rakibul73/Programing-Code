#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    float A, B, C, p, t;
    cin>>A>>B>>C;
    if ((A+B > C) && (A+C > B) && (B+C > A)) {
        p= A+B+C;

        cout<<"Perimetro = "<< fixed << setprecision(1) <<p<<endl;
    }
    else {
        t = 0.5 * (A+B) * C;
        cout<<"Area = "<< fixed << setprecision(1) <<t<<endl;
    }

    return 0;
}
