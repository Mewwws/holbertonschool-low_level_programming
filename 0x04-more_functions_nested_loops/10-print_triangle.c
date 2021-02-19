#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: triangle size
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				_putchar(' ');
			}
			for (; j < size; j++)
			{
				_putchar('#');
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
