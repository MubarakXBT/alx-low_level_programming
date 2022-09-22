#include "main.h"
#include <string.h>
/**
 * _strcat - Entry function
 * @dest: S1
 * @src: S2
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
