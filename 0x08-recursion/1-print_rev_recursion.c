#include "holberton.h"

/**
* _print_rev_recursion - prints in reverse with recursion
* @s: printed string
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
