#include "main.h"
/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int n)
{
	int i = n; 
	if (n >= 0)
	{
		if (i > 999999999)
		{
			_putchar(n / 1000000000 + '0');
			_putchar((n / 100000000) % 10 + '0');
			_putchar((n / 10000000) % 10 + '0');
			_putchar((n / 1000000) % 10 + '0');
			_putchar((n / 100000) % 10 + '0');
			_putchar((n / 10000) % 10 + '0');
			_putchar((n / 1000) % 10 + '0');
			_putchar((n / 100) % 10 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');

		}
		if (i > 999)
		{
			_putchar(n / 1000 + '0');
			_putchar((n / 100) % 10 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (i > 99)
		{
			_putchar(n / 100 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (i > 9)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
			_putchar(n % 10 + '0');
	}
	else if ( n < 0)
	{
		if (n < -999999999)
		{
			_putchar('-');
			_putchar((n * -1) / 1000000000 + '0');
			_putchar(((n * -1) / 100000000) % 10 + '0');
			_putchar(((n * -1) / 10000000) % 10 + '0');
			_putchar(((n * -1) / 1000000) % 10 + '0');
			_putchar(((n * -1) / 100000) % 10 + '0');
			_putchar(((n * -1) / 10000) % 10 + '0');
			_putchar(((n * -1) / 1000) % 10 + '0');
			_putchar(((n * -1) / 100) % 10 + '0');
			_putchar(((n * -1) / 10) % 10 + '0');
			_putchar(((n % 10) * -1) + '0');
		}
		else if (n < -999)
		{
			_putchar('-');
			_putchar((n * -1) / 1000 + '0');
			_putchar(((n * -1) / 100) % 10 + '0');
			_putchar(((n * -1) / 10) % 10 + '0');
			_putchar(((n % 10) * -1) + '0');
		}
		else if (n < -99)
		{
			_putchar('-');
			_putchar((n * -1) / 100 + '0');
			_putchar(((n * -1) / 10) % 10 + '0');
			_putchar(((n % 10) * -1) + '0');
		}
		else if (n < -9)
		{
			_putchar('-');
			_putchar((n * -1) / 10 + '0');
			_putchar(((n % 10) * -1) + '0');
		}
		else
		{
			_putchar('-');
			_putchar(((n % 10) * -1) + '0');
		}
	}
}
