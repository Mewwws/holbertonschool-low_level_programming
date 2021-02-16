#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	
	while (s[i] != '\0')
	{
		i++;
	}
	while (i + 1 > 0)
	{
		_putchar(s[i]);
		i--;
	}
}
