#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<< "Enter your result number : ";
    cin>> a;

    if(a>79)
        cout<< "your result is A+" << endl;
    else if(a>74)
        cout<< "your result is A" << endl;
    else if(a>69)
        cout<< "your result is A-" << endl;
    else if(a>64)
        cout<< "your result is B" << endl;
    else if(a>59)
        cout<< "your result is C" << endl;
    else if(a>54)
        cout<< "your result is D" << endl;
    else
        cout<< "your result is Fail" << endl;

}
