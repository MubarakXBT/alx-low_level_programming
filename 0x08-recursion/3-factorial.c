#include "main.h"
/**
 * factorial - Function
 * @n: parameter
 *
 * Return: -1 oe 1 or res
 */
int factorial(int n)
{
	int res;

	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);

	res = n * factorial(n - 1);
	return (res);
}
