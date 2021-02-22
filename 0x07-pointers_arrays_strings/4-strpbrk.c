#include "holberton.h"

/**
 * *_strpbrk - searches for first occurrence of a set of bytes in a string
 * @s: searched string
 * @accept: set of bytes
 * Return: pointer to result
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		s++;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				i = 1;
				break;
			}
		}
		if (i == 1)
		{
			break;
		}
	}
	return (s);
}
