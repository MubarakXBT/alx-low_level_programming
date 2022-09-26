#include "main.h"
/**
 * _memset - Function
 * @s: pointer
 * @b: variable to fill
 * @n: numbers of byte
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pr = s;

	while (n--)
	{
		*pr++ = b;
	}
	return (s);
}
