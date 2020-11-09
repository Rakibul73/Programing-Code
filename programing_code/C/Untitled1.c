#include<stdio.h>

int binary_function(int num, int ara[], int low, int high);

int main()
{
    int ara[]={1,4,5,6,7,9,12,15,19,24,26,28,30,35,39,40,45,48,49};
    int low = 0, high = 18, num = 28, b;

    b = binary_function(num, ara, low, high);
    if(b == 1) {
        printf("Sorry, We did not find the num - %d\n", num);
    }
    else {

        printf("We found the num - %d\nit's position is %d in the array\n", num, b+1);
    }

    return 0;
}




int binary_function(int num, int ara[], int low, int high)
{
    int a, mid;


    while(low <= high) {
        mid = (low+high)/2;
        if(num == ara[mid]) {
            break;
        }
        else if(num < ara[mid]) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }

    if(low < high) {
        return mid;
    }
    else {
        return 1;
    }

}
