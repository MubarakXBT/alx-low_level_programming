#include "main.h"
/**
 * _pow_recursion - Function
 * @x: parameter
 * @y: argument
 *
 * Return: -1 or 1 or "x" or "result"
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	res = x * _pow_recursion(x, (y - 1));
	return (res);
}
