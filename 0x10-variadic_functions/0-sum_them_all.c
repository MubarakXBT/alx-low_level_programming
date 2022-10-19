#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function to add given integers
 * @n: Counter for arguments
 *
 * Return: 0 if(n = 0) $$ sum if(n > 0)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum;
	unsigned int i;

	va_start(ptr, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
