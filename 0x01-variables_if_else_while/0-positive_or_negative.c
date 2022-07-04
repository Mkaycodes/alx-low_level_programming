#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main -> assign a random number to the variable n each time it is executed
* and prints the last digit of the number stored in the variable n
* Return : always 0
*/
int main(void);
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
