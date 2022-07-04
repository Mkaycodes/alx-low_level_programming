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
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d ls ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
         if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0");
	}
		printf("\n");
	}
	return (0);
}
