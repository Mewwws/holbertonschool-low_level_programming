#include "holberton.h"
#include <stdlib.h>
#define BUFFER 1024
/**
 * strtow -
 * @str:
 * Return:
 */
char **strtow(char *str)
{
	char **a;
	int i, j, k, words = 0, lets, letters = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			i++;
		else
		{
			for (; str[i] != ' ' && str[i] != '\0'; i++)
				letters++;
			words++;
		}
	}
	a = malloc(sizeof(char *) * (words + 1));
	if (a == NULL)
		return (NULL);
	j = 0;
	while (str[i] != '\0')
	{
		lets = 0;
		if (str[i] == ' ')
			i++;
		else
		{
			while (str[i] != ' ' && str[i] != '\0')
			{
				lets++;
			}
			lets++;
			a[j] = malloc(sizeof(char) * lets);
			if (a[j] != NULL)
			{
				for (i = 0; i < j; i++)
					free(a[i]);
				free (a);
				return (NULL);
			}
			i = (i + 1) - lets;
			for (k = 0; str[i] != '\0' && str[i] != ' '; k++)
			{
				a[j][k] = str[i];
			}
			a[j][k] = '\0';
				j++;
		}
	}
	a[j] = NULL;
	return (a);
}
