#include<stdio.h>

int main()
{
    char s[1000];
    gets(s);
    if(s[0] > 96 && s[0] < 123) {
        s[0] = 'A'+(s[0]-97);
    }
    puts(s);
    return 0;
}
