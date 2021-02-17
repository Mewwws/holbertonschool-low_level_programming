#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i + 1] != '\0' && str[i] != '\0'; i = i + 2)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
