#include <stdio.h>

/**
 * main - Entry point
 *
 * a to z inverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	
	return (0);
}
