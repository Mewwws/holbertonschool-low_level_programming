#include "holberton.h"

/**
 * _strcmp - compares 2 strings
 * @s1: is compared
 * @s2: is compared
 * Return: comparison result
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;
	int b = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s2[i] == '\0')
		{
			b = 1;
		}
		j = j + s1[i] - s2[i];
	}
	if (b == 0)
	{
		for ( ; s2[i] != '\0'; i++)
		{
			j = j + s1[i] - s2[i];
		}
	}
	return (j);
}
