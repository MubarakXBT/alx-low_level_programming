#include <stdio.h>
#include "main.h"
/**
 * main - Entry
 * @argc: arg
 * @argv: arg
 *
 * Return: Void
 */
int main(int argc, char **argv)
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
