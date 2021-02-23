#include "holberton.h"

/**
* print_sign - checks sign of int
* @n: checked int
* Return: 1 if +, 0 if 0, -1 if -
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
