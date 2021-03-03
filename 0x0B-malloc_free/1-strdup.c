#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - duplicates string
 * @str: pointer tu duplicate
 * Return: pointer to s
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *s;
	unsigned int j;

	if (*str == '\0')
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	s = malloc(i * sizeof(char));
	for (j = 0; j < i; j++)
		s[j] = str[j];
	if (s == NULL)
		return (NULL);
	return (s);
}
