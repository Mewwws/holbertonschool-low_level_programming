#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of array diagonal
 * @a:  pointer to int in array
 * @size: square size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (k = 0; k < size; k++)
	{
		i += a[l];
		l += size + 1;
	}
	l = 0;
	for (k = 0; k < size; k++)
	{
		l += size - 1;
		j += a[l];
	}
	printf("%d, %d\n", i, j);
}
