#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates 2 strings
 * @s1: cat first
 * @s2: cat second
 * Return: pointer to s
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	char *s;
	unsigned int j;

	i = 0;
	for (j = 0; s1[j] != '\0'; j++)
		i++;
	for (j = 0; s2[j] != '\0'; j++)
		i++;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	for (j = 0; s1[j] != '\0'; j++)
	{
		s[i] = s1[j];
		i++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	i++;
	s[i] = '\0';
	return (s);
}
