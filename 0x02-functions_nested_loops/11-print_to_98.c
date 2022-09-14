#include "main.h"
/**
 * print_to_98 - ENtry point
 * @n: Function arg
 *
 * Return: void (Success)
 */
void print_to_98(int n)
{
	int i{};

	while (i <= 98)
	{
		if (i == n)
			_putchar (i);
	}
	i++;
}
