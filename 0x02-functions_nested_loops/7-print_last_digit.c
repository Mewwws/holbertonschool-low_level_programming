#include "holberton.h"

/**
* print_last_digit - like it says
* @a: lastdigitable
* Return: a
*/
int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
