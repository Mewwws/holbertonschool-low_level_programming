#include "holberton.h"

/**
* _sqrt_recursion - square root with recursion?
* @n: search square root of this
* Return: root or -1
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
