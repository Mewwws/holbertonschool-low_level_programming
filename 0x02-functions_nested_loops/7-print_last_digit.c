#include "holberton.h"

/**
* print_last_digit - like it says
* @a: lastdigitable
* Return: a
*/
int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		a = -a;
	}
	b = a % 10;
	_putchar(b + '0');
	return (b);
}