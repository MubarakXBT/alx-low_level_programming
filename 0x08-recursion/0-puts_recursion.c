#include "main.h"
/**
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar (*s);
		s++;
		i++;
	}
	_putchar ('\n');
}
