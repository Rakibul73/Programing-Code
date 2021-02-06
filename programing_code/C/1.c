
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include<stdio.h>
int binary_search(int num, int ara[], int low_index, int high_index)
{
int mid_index;
while (low_index <= high_index)
{
mid_index = (low_index + high_index) / 2;
if(num == ara[mid_index])
{
break;
}
if(num > ara[mid_index])
{
low_index = mid_index + 1;
}
else
{
high_index = mid_index -1;
}
}
if(low_index > high_index)
{
return 0;
}
else
{
return mid_index;
}
}

int main()
{
int ara[] ={1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 100, 101};

int num = 97;
int low_index = 0;
int high_index = 15;
int search = binary_search(num, ara, low_index, high_index);
if(search == 0)
{
printf("%d number is not in array", num);
}
else
{
printf("%d is in %d th position in array", num, search);
}
return 0;
}
