#include <stdio.h>

int main()
{
    int i, temp, j = 10, k, ara[] = {5,30,25,24,26,84,51,62,54,50};
    printf("Original list =\n");
    for(i = 0; i < j; i+=1)
    {
        printf("ara[%d] = %d\n", i, ara[i]);
    }








    k = j;
    while(1)
    {

        for(i = 0; i < k; i++)
        {

            if(ara[i] > ara[i+1])
            {
                temp = ara[i];
                ara[i] = ara[i+1];
                ara[i+1] = temp;
            }


        }
        k = k - 1;


        if(k == 2) {
            break;
        }

        //printf("5");
    }











    printf("sorted list =\n");
    for(i = 0; i < j; i+=1)
    {
        printf("ara[%d] = %d\n", i, ara[i]);
    }
    return 0;
}
