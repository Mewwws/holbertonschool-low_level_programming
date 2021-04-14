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
	int i, word = 0, k, o, words = 0, len = 0, letters = 0;
	char *b;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = words_count(str);
	if (words == 0)
		return (NULL);
	a = malloc(sizeof(char *) * (words + 1));
	if (a == NULL)
		return (NULL);
	while (str[i] != '\0' && word < words)
	{
		if (str[i] == ' ')
			i++;
		else
		{
			b = str + i;
			while (str[i] != ' ' && str[i] != '\0')
			{
				len++;
				i++;
			}
			len++;
			a[word] = malloc(sizeof(char) * len);
			if (a[word] == NULL)
			{
				while (word >= 0)
				{
					free(a[word]);
					word--;
				}
				free (a);
				return (NULL);
			}
			o = 0;
			while (*b != '\0' && *b != ' ')
			{
				a[word][o] = *b;
				o++;
				b++;
			}
			a[word][o] = '\0';
			word++;
			len = 0;
			i++;
		}
	}
	return (a);
}
/**
 * words_count - counts words
 * @str: counter string
 * Return: number of words
 */
int words_count(char *str)
{
	int i;
	int words = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			i++;
		else
		{
			while (str[i] != ' ' && str[i] != '\0')
			       i++;
			words++;
		}
	}
	return (words);
}
