
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <stdio.h>
int main(void)
{
    int CT1, CT2,CT3,atd, m,a,num;


    scanf("%d %d %d %d %d",&CT1, &CT2,&CT3,&atd, &m);
    if(CT1 < CT2 && CT1 < CT3)
    {
        a=(CT2+CT3)/2;
    }
    else if(CT2 < CT3)
    {
        a=(CT1+CT3)/2;
    }
    else
    {
        a=(CT2+CT1)/2;
    }

    num=a+atd+m;

    if(num >= 80)
    {
        printf("%d A+\n", num); // printing outputs
    }
    else if ( num >=75 && num <=79)  // Note the space between else & if
    {
        printf("%d A\n", num);
    }
    else if ( num >=70 && num <=74)
    {
        printf("%d A-\n", num);
    }
    else if ( num >=65 && num <=69)
    {
        printf("%d B+\n", num);
    }
    else if ( num >=60 && num <=64)  // Note the space between else & if
    {
        printf("%d B\n", num);
    }
    else if ( num >=55 && num <=59)  // Note the space between else & if
    {
        printf("%d B-\n", num);
    }
    else if ( num >=50 && num <=54)  // Note the space between else & if
    {
        printf("%d C+\n", num);
    }
    else if ( num >=45 && num <=49)  // Note the space between else & if
    {
        printf("%d C\n", num);
    }
    else if ( num >=40 && num <=44)  // Note the space between else & if
    {
        printf("%d D\n", num);
    }
    else if ( num >=0 && num <=39)  // Note the space between else & if
    {
        printf("%d F\n", num);
    }
    return 0;
}
