#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - Entry
 * @s: argument
 *
 * Return: 0 (Success)
 */
int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
		len++;

	return (len);
}
