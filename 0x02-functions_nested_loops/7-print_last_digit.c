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
	a = a % 10;
	_putchar(a + '0');
	return (a);
}
