#include "main.h"
/**
 *
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
		return;
	if (*s)
	{
		_putchar (*s);
		s++;
		_puts_recursion(s);
	}
	return;
	_putchar ('\n');
}
