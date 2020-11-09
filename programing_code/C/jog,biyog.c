#include<stdio.h>
int main()
{
    char ope;
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    printf("Enter an operator(+,-,*,/): ");
    scanf(" %c",&ope);
    if (ope=='+')
        printf("%d + %d= %d\n",num1,num2,num1+num2);
    else if (ope=='-')
        printf("%d - %d= %d\n",num1,num2,num1-num2);
    else if (ope=='*')
        printf("%d * %d= %d\n",num1,num2,num1*num2);
    else if (ope=='/')
        printf("%d / %d= %d\n",num1,num2,num1/num2);
    else
        printf("Not a valid operator\n");
    return 0;
}
