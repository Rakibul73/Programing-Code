#include<stdio.h>
#include<time.h>

int main()
{
    clock_t t;

    time(&t);


    printf("%s\n%s", ctime(&t));

}
