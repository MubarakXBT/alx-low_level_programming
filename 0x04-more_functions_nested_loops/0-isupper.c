#include "main.h"
/**
 * _isupper - Entry
 * @c: Function argunent
 *
 * Return: 1 if capital, 0 if otherwise
 */
int _isupper(int c)
{
	char i;
	int alpha = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			alpha = 1;
			break;
		}
	}
	return (alpha);
}
