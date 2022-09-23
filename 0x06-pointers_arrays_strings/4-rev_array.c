#include "main.h"
/**
 * reverse_array - entrry
 * @a: int
 * @n: counter
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, g;
	int j;

	g = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[g];
		a[g--] = j;
	}
}
