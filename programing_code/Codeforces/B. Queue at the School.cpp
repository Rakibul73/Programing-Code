#include<stdio.h>
#include<stdlib.h>

int main(int c, char *argv[])
{
	printf("By the time you will compile me I will be destroyed \n");

// array of pointers to command line arguments
	remove(argv[0]);

// Note: argv[0] will contain the executable file i.e. 'a.out'

return 0;
}

// This code is contributed by MAZHAR IMAM KHAN.

