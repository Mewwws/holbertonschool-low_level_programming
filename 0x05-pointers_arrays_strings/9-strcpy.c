#include "holberton.h"

/**
 * _strcpy - copies string
 * @src: copy from
 * @dest: copy to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src [i];
	}
	return (dest);
}
