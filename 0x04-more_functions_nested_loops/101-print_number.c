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
		if (i > 9)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
			_putchar(n % 10 + '0');
	}
	else if ( n < 0)
	{
		if (n < -9)
		{
			_putchar('-');
			_putchar((n * -1) / 10 + '0');
			_putchar((n * -1) % 10 + '0');
		}
		else
		{
			_putchar('-');
			_putchar((n * -1) + '0');
		}
	}
}
