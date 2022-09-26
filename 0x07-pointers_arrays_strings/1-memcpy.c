#include "main.h"
/**
 *
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
