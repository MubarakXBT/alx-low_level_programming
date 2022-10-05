#include "main.h"
/**
 * _memcpy - Function
 * @dest: array 1
 * @src: array 2
 * @n: number of bytr
 *
 * Return: pointer[dest]
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pr = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*pr++ = src[i];
	}
	return (dest);
}
