#include "main.h"
/**
 * swap_int - Entry Function
 * @a: Arg 1
 * @b: Arg 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
