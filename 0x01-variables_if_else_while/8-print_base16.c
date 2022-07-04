#include <stdio.h>
/**
*main -> prints numbers between 0 to 9 and letters from a to f
* Return: Always 0
*/
int main(void)
{
char ch;
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
