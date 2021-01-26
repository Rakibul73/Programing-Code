#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 256

int main()
{

	int num;
    FILE * fi;

    fi = fopen("Data.txt", "w");

    if(fi == NULL) {
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

    for (int x = 1; x <= 60; x++) {
		num = x*x;
		fprintf(fi, "%d\n", num);
	}
    fclose(fi);
    
	int roll;
	scanf("%d", &roll);

	fi = fopen("Data.txt", "r");

	char buffer[MAX_LEN];
	int count = 1,found = 0;
	while (found == 0 && fgets(buffer, MAX_LEN - 1, fi) != NULL)
	{
		if (count == roll)
		{
			found = 1;
			buffer[strcspn(buffer, "\n")] = 0;
			printf("%s\n", buffer);

		}
		else
		{
			count++;
		}
	}
	fclose(fi);

    return 0;
}