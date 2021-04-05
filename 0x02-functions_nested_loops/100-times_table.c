#include "holberton.h"

/**
* print_times_table - prints the 9 times table
* @n: times table up to n
* Return: void
*/
void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15)
		return;
	for (j = 0; j <= n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			if (i > 0)
				_putchar(' ');
			if (i > 0)
			{
				if ((j * i) / 100 > 0)
					_putchar (j * i / 100 + '0');
				else
					_putchar (' ');
			}
			if (i > 0)
			{
				if ((j * i) < 10)
					_putchar(' ');
				else
					_putchar(((j * i) % 100) / 10 + '0');
			}
			_putchar((j * i) % 10 + '0');
			if (i < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
