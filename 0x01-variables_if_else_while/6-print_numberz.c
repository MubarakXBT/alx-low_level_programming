#include <stdio.h>

/**
 * main - Entry point
 *
 * Single digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
