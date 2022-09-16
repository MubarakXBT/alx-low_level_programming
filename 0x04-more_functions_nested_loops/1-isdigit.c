#include "main.h"
/**
 * _isdigit - Entry
 * @c: Function argunent
 *
 * Return: 1 if digit, 0 if otherwise
 */
int _isdigit(int c)
{
	int i;
	int num;

	for (i = 0 ; i <= 9; i++)
	{
		if (i == c)
			num = 1;
		else
			num = 0;
	}
	return (num);
}

