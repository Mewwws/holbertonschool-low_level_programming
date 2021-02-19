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

	for (i = 0; i < size, i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (; j < size; j++)
		{
			_putchar('#');
		}
	}
}
