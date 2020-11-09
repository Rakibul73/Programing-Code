#include<stdio.h>
#include<time.h>

int main()
{
    struct tm t;

    t.tm_sec = 54;
    t.tm_min = 54;
    t.tm_hour = 15;
    t.tm_mday = 20;
    t.tm_mon = 5;
    t.tm_year = 120;
    t.tm_wday = 6;s

    puts(asctime(&t));



    return 0;
}
