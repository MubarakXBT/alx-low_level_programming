#include "main.h"
/**
 * _islower - Entry
 * Return: 0 Always (Success)
 */
int _islower(int c)
{
	char i;
	int low;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			low = 1;
		}
		else
		{
			low = 0;
		}
	}
	return (low);
}
