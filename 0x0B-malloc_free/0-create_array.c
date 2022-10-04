#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry function
 * @size: size of array
 * @c:name of array
 *
 * Return: s (SUcess)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
