#include "holberton.h"
/**
 * puts_half - prints second half of a string
 * @str: string pointer
 * Return:
 */
void puts_half(char *str)
{

/* calculates string length */
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	/* prints second half */
	for (j = (i / 2 + 1); j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
