#include <stdio.h>
/**
*main ->  prints numbers from 0 to 9 with commas and spaces
*
* Return: Always 0 (Success)
*/
int main(void)
{
int ch;
for (ch = 48; ch < 58; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10); /* this is an ascii code for new line*/
return (0);
}
