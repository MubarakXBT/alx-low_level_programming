#include "main.h"
#include <stdlib.h>
/**
 * creat_array - Entry function
 * @size: size of array
 * @c:name of array
 *
 * Return: s (SUcess)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
