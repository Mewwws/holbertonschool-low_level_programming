#include "holberton.h"

/**
* factorial - count factorial
* Return: result
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n < 2)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
