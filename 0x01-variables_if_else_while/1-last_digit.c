#include <stdlib.h>i
#include <stdio.h>
#include <time.h>

/**
 * main - > assign a raandom number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 * Return : 0 on success. error code otherwise
 */
int main(void)
{
	int n; l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10
	printf("last digit of %d ls ", n, x);
	if (l > 5)
	{
		printf("last digit of %d is %d is greater than 5\n",n , l);
	}
	else if (l == 0)
	{
		printf("last digit of %d is %d and is 0\n" , n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, l);
	}
		printf("not 0\n");
	}
	return (0);
}
