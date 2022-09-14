#include "main.h"
#include "stdio.h"
/**
 * print_sign - Entry point
 * @n: integer number
 *
 * Return: 1, 0, -1 (Success)
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
