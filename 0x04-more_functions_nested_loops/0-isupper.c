#include "main.h"
/**
 * _isupper - Entry
 * @c: Function argunent
 *
 * Return: 1 if capital, 0 if otherwise
 */
int _isupper(int c);
{
	char i;
	int alpha;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			alpha = 1;
		else
			alpha = 0;
	}
	return (alpha);
}
