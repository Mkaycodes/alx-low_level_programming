#include <stdio.h>
/**
 * main -> assign a random number to the variable n each
 *and print the last digit of the number stored in the variable n 
 * Return:  0 on success. error code otherwise
 */
int main(void)
{
	char a = 'a';
        int n = 0;
	while (n < 26)
	{
		putchar(a);
		a++;
		n++;
	}
	putchar('\n');
	return (0);
}
