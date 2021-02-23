#include "holberton.h"

/**
* times_table - prints the 9 times table
* Return: void
*/
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = i * 9;
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
		if (j / 10 == 0)
		{
			_putchar(' ');
		}
		else
		{
			_putchar(j / 10 + '0');
		}
		_putchar(j % 10 + '0');
		_putchar('\n');
	}
}
