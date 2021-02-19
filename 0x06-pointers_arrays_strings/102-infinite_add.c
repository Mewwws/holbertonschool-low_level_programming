#include "holberton.h"
#include <stdio.h>
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
	int y ;
	int i;
	int j;

	for (i = 0; n1[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; n2[j] != '\0'; j++)
	{
		continue;
	}

	for (y = 0; y < size_r; y++)
	{
		printf("%s",r);
		if ((n1[i - y] + n2[j - y] + x) > 9)
		{
		r[size_r - y] = (n1[i - y] + n2[j - y] + x) % 10;
		x = 1;
		}
		else
		{
		r[size_r - y] = n1[i - y] + n2[j - y] + x;
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
