#include "holberton.h"

/**
* 
* Return:
*/
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	for (i = 0; i <= n; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
		if (i * i > n)
		{
			return (-1);
		}
	}
	return (-1);
}
