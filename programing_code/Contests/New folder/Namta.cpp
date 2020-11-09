#include<iostream>

using namespace std;

int main()
{
    cout<< "Enter how many ghorer namta : ";
    int namta, a, b=1;
    cin>> namta;
    cout<< namta << " koto ghor porjonto : ";
    cin>> a;
    while(b<=a) {
        cout << namta << "x" << b << "=" << namta*b <<endl;
        b++;
    }
    return 0;
}
