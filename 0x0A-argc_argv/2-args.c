#include <stdio.h>
#include "main.h"
/**
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argc > 0)
	{
		printf("%s\n", argv[i]);
		argc --;
		i++;
	}
	
	return (0);
}
