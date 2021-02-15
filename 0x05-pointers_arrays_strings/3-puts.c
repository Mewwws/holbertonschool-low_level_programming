#include "holberton.h"
#include <stdio.h>

/**
 * _puts - prints a string
 *
 * Return: 0
 */

void _puts(char *str)
{
	while(*str != \0)
	{
		_putchar(*str);
		str++;
	}
}
