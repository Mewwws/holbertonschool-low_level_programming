#include <stdio.h>
#include "holberton.h"
/**
* print_line - prints a line of '_'s
* n - n times '_'
*return void
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
