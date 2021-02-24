#include "holberton.h"

/**
* is_prime_number
* Return:
*/
int is_prime_number(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
