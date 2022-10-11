#include <stdio.h>
/**
 * main - Entry
 * description: To print name of source file i.e BASE_FILE
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
