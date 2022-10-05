#include "main.h"
/**
 * _strchr - Entry function
 * @s: Array of element
 * @c: Element to search for
 *
 * Return: r
 */
char *_strchr(char *s, char c)
{
	char *r;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			r = &s[i];
			break;
		}
		else
		{
			r = "NULL";
		}
		i++;
	}
	return (r);
}
