#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - > program entry point
 * Return : 0 on success. error code otherwise
 */
int main(void)
{
	int n; l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10
	if (l > 5)
	{
		printf("last digit of %d is %d is greater than 5\n", n, l);
	}
	else  if (l == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, l);
		
		printf("not 0\n");
	}
	return (0);
}
