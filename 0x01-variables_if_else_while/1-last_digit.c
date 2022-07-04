#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - > assign a raandom number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 * Return : always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d ls ", n);
	if (n > 5)
	{
		printf("greater than 5");
	}
         if (n == 0)
	{
		printf("0");
	}
	if (n < 6 && n != 0)
	{
		printf("Less than 6 not 0");
	}
		printf("\n");
	}
	return (0);
}
