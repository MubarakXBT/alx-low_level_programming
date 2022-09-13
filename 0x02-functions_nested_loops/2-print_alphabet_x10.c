#include <stdio.h>
/**
 * print_alphabet_x10 - Entry
 * Return: Always (Success)
 */
void print_alphabet_x10(void);
{
	char ch;
	int n;

	n = 1;
	while (n <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		n++
	}
	return;
}
