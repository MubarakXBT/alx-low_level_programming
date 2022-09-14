#include "main.h"
/**
 * times_table - entry
 *
 * Return: empty
 */
void times_table(void)
{
	int i;
	int j = 0;
	int n;

	for (i = 0; i <= 9; i++)
	{
		while (j <= 9)
		{
			n = i * j;
			_putchar(n);
		}
		j++;
	}
	_putchar('\n');
}
