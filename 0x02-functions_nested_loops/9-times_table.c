#include "main.h"
/**
 * times_table - entry
 *
 * Return: empty
 */
void times_table(void)
{
	int i,j,n;

	for (i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			n = i * j;
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
