#include "main.h"
/**
 * print_rev
 * @s: Argument
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *l = s;
	
	while (*l)
		l++;
	l -= 1;

	while (l)
	{
		_putchar(*s);
		l--;
	}
	_putchar('\n');
}
