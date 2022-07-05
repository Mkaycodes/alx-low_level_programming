#include <stdio.h>
/**
 * main -> program entry point
 * Return:  0 on success. error code otherwise
 */
int main(void)
{
	int ch;
	for (ch = 97; ch <= 122; ch ++)
	{
		putchar(ch);
	}
	putchar(10); /* this is an ascii code fornew line */
	return (0);
}
