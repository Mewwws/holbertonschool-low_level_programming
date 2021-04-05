#include "holberton.h"

/**
* times_table - prints the 9 times table
* Return: void
*/
void times_table(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if ((j * i) / 100 > 0)
				_putchar (j * i / 100 + '0');
			else
				_putchar (' ');
			if ((j * i) < 10)
				_putchar(' ');
			else
				_putchar(((j * i) % 100) / 10 + '0');
			_putchar((j * i) % 10 + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}
