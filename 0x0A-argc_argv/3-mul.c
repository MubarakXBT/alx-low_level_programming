#include <stdio.h>
#include "main.h"
/**
 */
int main(int argc, char* argv[])
{
	/*char i;*/
	/*int mul = 1;*/

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	if (argc >= 3)
	{
		/*for (i = '1'; i < '3'; i ++*/
		printf("%s\n", argv['1'] '*' argv['2']);
	}

	return (0);
}
