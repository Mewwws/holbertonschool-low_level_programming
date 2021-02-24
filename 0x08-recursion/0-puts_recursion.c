#include "holberton.h"

/**
* _puts_recursion - puts string with recursion
* @s: printed string
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
