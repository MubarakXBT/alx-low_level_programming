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
	int i;
	int j;
	int res = -15;
	i = 0;
	j = 0;

	while (i == j)
	{
		if (s1[i] == '\0' && s2[j] == '\0')
		{
			res = 0;
			break;
		}
		else if (s1[i] != '\0' && s2[j] == '\0')
		{
			res = 15;
			break;
		}
		else if (s1[i] == '\0' && s2[j] != '\0')
		{
			break;
		}
		i++;
		j++;
	}

	return (res);
}
