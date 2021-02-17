#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		continue;
	}

	i = 0;
	while (i < j)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
