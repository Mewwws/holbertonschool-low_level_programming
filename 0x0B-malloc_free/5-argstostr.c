#include “holberton.h”

/**
 * argstostr - cats strings
 * @ac: args count
 * @av: string of args
 * Return: pointer to cats
 */
char *argstostr(int ac, char **av)
{
	int i, j, m;
	int k = 0;
	char *h;

	if (ac < 1 || av = NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}
	k++;
	h = malloc(sizeof(char) * k);
	if (h == NULL)
		return (NULL);
	m = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			h[m] = av[i][j];
			m++;
		}
		h[m] = '\n';
		m++;
	}
	h[m] = '\0';
	return (h);
}
