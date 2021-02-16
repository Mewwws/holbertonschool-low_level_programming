#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char *k, *l, swp;

	k = s;
	l = s;
	i = 0;
	/* size of string to i */
	while (s[i] != '\0')
	{
		i++;
	}
    /* got size */
	for (j = 0; j < i - 1; j++)
	{
		l++;
	}

	for (j = 0; j < i / 2; j++)
	{
		swp = *l;
		*l = *k;
		*k = swp;
		k++;
		l--;
	}
}
