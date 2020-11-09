#include <iostream>

using namespace std;

int main()
{
    cout<< "how many time factorial??" << endl;
    int a,b;
    cin>>a;
    b=a;
    for(int i=a-1; i>0; i--) {
        b=b*i;

    }
    cout<<b<<endl;
}
