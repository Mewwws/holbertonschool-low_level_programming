#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint - converts b to unsigned int
 * @b: binary as a string
 * Return: unsigned int result
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int j = 1;
	unsigned int a = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if ((b[i] < '0') && (b[i] > '1'))
			return (0);
		i++;
	}
	while (i >= 0)
	{
		a = a + (b[i] - '0') * j;
		j = j * 2;
		i--;
	}
	return (a);
}
