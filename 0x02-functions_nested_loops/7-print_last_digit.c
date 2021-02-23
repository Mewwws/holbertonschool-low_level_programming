#include "holberton.h"

/**
* print_last_digit - like it says
* @a: lastdigitable
* Return: a
*/
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a % 10 + '0');
	return (a % 10);
}
