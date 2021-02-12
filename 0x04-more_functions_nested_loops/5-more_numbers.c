#include "holberton.h"

/**
 * print_numbers - prints 0 - 9
 * Return: result
 */

void more_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9'; i++)
	{
		int j;
		char k;

		j = '0';
		k = 'O';

		while (j < 15)
		{
			if (j > 10)
			{
				k = (j / 10);
				_putchar(k);
			}
			k = (j % 10);
			_putchar(k);
			_putchar('\n');
		}
	}
}
