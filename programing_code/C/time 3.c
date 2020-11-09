#include<stdio.h>
#include<time.h>

int main()
{
    time_t seconds;
    seconds = time(NULL);
    printf("%ld", seconds);

}
