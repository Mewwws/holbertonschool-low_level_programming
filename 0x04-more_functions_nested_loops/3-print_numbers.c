#include <stdio.h>
#include "holberton.h"

/**
 * print_numbers - prints 0 - 9
 * Return: result
 */

void print_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
