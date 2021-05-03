#include "holberton.h"

/**
 * *_memcpy - copies area to area
 * @src: is copied
 * @dest: is copied to
 * @n: number of copied bytes
 * Return: copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
