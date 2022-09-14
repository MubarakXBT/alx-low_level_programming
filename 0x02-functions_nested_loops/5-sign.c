#include "main.h"
<<<<<<< HEAD
/**
 * print_sign - Entry point
 * @n: function Variable
 * Return: 1 || 0
 */

int print_sign(int n)
{
	 int low;
	 int sign;
	 
	 if (n >= 1)
	 {
		 low = 1;
		 _putchar('+');
		 _putchar('\n');
	 }
	 else if (n <= 2)
	 {
		 low = -1;
		 _putchar('-');
		 _putchar('\n');
	 }
	 else
	 {
		low = 0;
		_putchar('0');
		_putchar('\n');
	 }
	 return (low)
=======
#include "stdio.h"
/**
 * print_sign - Entry point
 * @n: integer number
 *
 * Return: 1, 0, -1 (Success)
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
>>>>>>> c730b76f236e576d010a6c101b3c4baede5add1a
}
