#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: cat first
 * @s2: cat second
 * @n: max length to cat
 * Return: pointer to s
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *s;
	unsigned int j;
	unsigned int k;
	unsigned int l;

	i = 0;
	if (s1 != 0)
	{
		if (s1 == NULL)
			s1 = "";
		for (j = 0; s1[j] != '\0'; j++)
			i++;
	}
	k = 0;
	if (s2 != 0)
	{
		if (s2 == NULL)
			s2 = "";
		for (j = 0; s2[j] != '\0'; j++)
		{
			k++;
			if (k >= n)
				break;
		}

	}
	s = malloc((i + k + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	l = 0;
	if (s1 != 0)
		for (j = 0; j < i; j++)
		{
			s[l] = s1[j];
			l++;
		}
	if (s2 != 0)
		for (j = 0; j < i + k; j++)
		{
			s[l] = s2[j];
			l++;
		}
	l++;
	s[l] = '\0';
	return (s);
}
