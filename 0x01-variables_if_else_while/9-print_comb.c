#include <stdio.h>
/**
 * main - Entry point
 *
 * comibination of single digit
 *
 * return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}