#include <stdio.h>
#include "main.h"
/**
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", argv[0]);

	return(0);
}
