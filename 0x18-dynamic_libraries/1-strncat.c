#include "holberton.h"

/**
 * *_strncat - concatenates strings
 * @src: is concatenated
 * @dest: gets concatenated into
 * @n: maximum of used bytes
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (j < n)
	{
	dest[i + j] = '\0';
	}
	return (dest);
}
