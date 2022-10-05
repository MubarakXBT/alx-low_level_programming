#include <stdio.h>
#include "main.h"
/**
 * main - Entry
 * @argc: arg
 * @argv: arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", argv[0]);

	return (0);
}
