#include <stdio.h>

/**
 * main - Entry point
 *
 * A to Z lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a', ch <= 'z', ch++)
	{
		putchar(ch);
	}
	for (ch = 'A', ch <= "Z", ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	
	return (0);
}
