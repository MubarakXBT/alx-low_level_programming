#include "main.h"
/**
 * print_rev
 * @s: Argument
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *len = s;

	while (*len)
		len++;
	len -= 1;

	while (len)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
