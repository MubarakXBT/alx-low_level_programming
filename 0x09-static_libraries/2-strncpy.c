#include "main.h"
#include <string.h>
/**
 * _strncpy - Function
 * @dest: arg 1
 * @src: arg 2
 * @n: arg 3
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
		int i;

		i = 0;
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}
