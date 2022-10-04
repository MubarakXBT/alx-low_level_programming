#include "main.h"
/**
 */
int _sqrt_recursion(int n)
{
	int i;
	int res = -1;

	for (i = 3;i < 100 ;i++)
	{
		if (n % i == 0)
		{
			if (i * i == n)
				return (i);
		}
		if (n % i != 0)
			break;
	}
	/*i++;*/
	_sqrt_recursion(n);
	return (res);
}
