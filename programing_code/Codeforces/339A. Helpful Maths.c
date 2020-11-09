#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i,j;
    gets(s);
    for(i=0; i<strlen(s); i+=2) {
        for(j=i+2; j<strlen(s); j+=2) {
            if(s[i] > s[j]) {
                int temp;
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    puts(s);
    return 0;
}
