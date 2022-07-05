#include <stdio.h>
/**
 * main -> program entry point
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
