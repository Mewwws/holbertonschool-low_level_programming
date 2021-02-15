#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps variables
 * @a: is swapped
 * @b: is swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
