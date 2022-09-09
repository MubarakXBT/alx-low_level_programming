#include <stdlib.h>
#include <time.h>
/* more headers goes there 
 * main - Entry point
 *
 * Return 0*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 5)
		printf("last digit of n is %d and is greater than 5\n",n);
	else if (n == 0)
		printf("last digit of n is %d and is 0\n",n);
	else
		printf("last digit of n is %d and is less than 0\n",n);

	return (0);
}
