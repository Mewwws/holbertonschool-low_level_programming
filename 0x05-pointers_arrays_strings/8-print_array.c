#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array
 * @n: array's number
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
