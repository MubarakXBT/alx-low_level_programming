#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - entry
 * @argc: arg
 * @argv: arg
 *
 * Return: 1 fail 0-sucess
 */
int main(int argc, char **argv)
{
	int l, mul, n1, n2;

	l = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (l);
	}
	if (argc >= 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
		l = 0;
	}
	return (l);
}
