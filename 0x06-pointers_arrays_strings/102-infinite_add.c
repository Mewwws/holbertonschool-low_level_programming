#include "holberton.h"

/**
 * *infinite_add - adds a string that is made of numbers
 * @n1: added number
 * @n2: added number
 * @r: addition result
 * @size_r: size of result
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0;

	for (; size_r > 0; size_r--)
	{
		if ((n1[size_r] + n2[size_r] + x) > 9)
		{
		r[size_r] = (n1[size_r] + n2[size_r] + x) % 10;
		x = 1;
		}
		else
		{
		r[size_r] = n1[size_r] + n2[size_r] + x;
		x = 0;
		}
	}
	if ((n1[0] + n2[0] + x) / 10 != 0)
	{
		return (0);
	}
	else
	{
		return (r);
	}
}
