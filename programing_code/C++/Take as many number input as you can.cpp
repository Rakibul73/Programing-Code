#include <iostream>
using namespace std;
int main()
{
    string str;
    int a,b,c;
    cin>>str;
    c=str.size();
    int arr[c];
    b=0;
    while(b!=c)
    {
        arr[b]=str[b]-'0' ;//the subtraction of ‘0’ is essential,thats what
        //converts it to a number
        b++;
    }

    return 0;
}
