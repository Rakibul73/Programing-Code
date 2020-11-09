#include <iostream>

using namespace std;

int main()
{
    int *pointer, i=8;
    pointer = &i;

    double *dp, j=10.5;
    dp = &j;

    string *str, k="ami valo";
    str = &k;

    cout<< *pointer << "\t==\t" << pointer <<endl;
    cout<< *dp << "\t==\t" << dp <<endl;
    cout<< *str << "\t==\t" << str <<endl;
    return 0;

}
