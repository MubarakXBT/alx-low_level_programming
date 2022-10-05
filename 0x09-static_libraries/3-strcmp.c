#include "main.h"
#include <string.h>
/**
 * _strcmp - Entry
 * @s1: arg 1
 * @s2: arg 2
 *
 * Return: 0 equal, 15 A > B, -15 A < B
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
