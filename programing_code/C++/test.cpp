#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    cout<< exp(2) << endl;
    cout<< log(3) << endl;
    cout << pow(2,5) << endl;
    cout << pow(2.2 , 5.6) << endl;
    cout<< sqrt(25) << endl << sqrt(25.9) << endl;
    cout<< cbrt(64) << endl<< cbrt(64.8) <<endl;
    cout<< ceil(5.6) << endl;
    cout<< floor(5.8) << endl;
    cout<< fmod(7.5, 2.2) << endl;
    cout<< round(5.4) << endl;
    cout<< llround(10.56) << endl;
    cout<< fdim(-12, 50) << endl<< fdim(50, -12)<<endl;
    cout<< fmax(10, 8) <<endl << fmax(8,10) <<endl;
    cout<< fmin(50,52) << endl << fmin(52,50) <<endl;
    cout<<fabs(-88) <<endl<< fabs(-88.88)<< endl;
    return 0;
}
