#include <stdio.h>

/**
 * main - Entry point
 *
 *A to Z lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
