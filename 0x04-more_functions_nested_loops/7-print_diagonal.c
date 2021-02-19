#include "holberton.h"

/**
* print_diagonal - prints a diagonal with "\" and " "
* @n: diagonal's length
* Return: void
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
}
