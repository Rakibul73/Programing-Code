#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    float N1, N2, N3, N4, N5, m, t;
    cin>>N1>>N2>>N3>>N4;
    m = ((N1*2) + (N2*3) + (N3*4) + N4) / 10.0;
    cout<<"Media: "<< fixed << setprecision(1) <<m<<endl;
    if (m >= 7.0) {
        cout<<"Aluno aprovado."<<endl;
    }
    else if (m < 5.0) {
        cout<<"Aluno reprovado."<<endl;
    }
    else {
        cout<<"Aluno em exame."<<endl;
        cin>>N5;
        cout<<"Nota do exame: "<<N5<<endl;
        t = (N5 + m) / 2.0;
        if (t >= 5.0) {
            cout<<"Aluno aprovado."<<endl;
        }
        else {
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<< fixed << setprecision(1) <<t<<endl;

    }

    return 0;
}
