#include  <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_numbers - Function to print given digits
 * @separator: Sign to separate different numbers
 * @n: amount of digits to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j = 1, i = 0;
	int val;
	const char *sep;
	va_list ptr;

	va_start(ptr, n);

	for (sep = separator; i < n; i++)
	{
		if (sep != NULL && *sep != '\0')
		{
			val = va_arg(ptr, int);
			printf("%d", val);
			if (j++ < n)
			{
				putchar(*sep);
				putchar(' ');
			}
		}
		else
		{
			val = va_arg(ptr, int);
			printf("%d", val);
		}
	}
	putchar('\n');
}
