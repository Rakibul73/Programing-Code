#include <iostream>

using namespace std;

class Book{
public:
    int price;
    Book() {
        price = 100;
    }
    void setprice() {
        price = 200;
    }

};

int main()
{
    Book book;
    Book book2;
    book.setprice();


    cout<< book.price << endl;
    cout<< book2.price;
    return 0;
}
