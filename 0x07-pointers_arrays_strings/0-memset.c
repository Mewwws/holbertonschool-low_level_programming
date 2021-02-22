#include "holberton.h"

/**
 * *_memset - fills first bytes of memory area with constant
 * @s: string to be filled
 * @b: constant byte replacer
 * @n: first n bytes to be replaced
 * Return: string pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
