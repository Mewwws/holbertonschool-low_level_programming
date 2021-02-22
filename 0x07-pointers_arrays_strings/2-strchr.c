#include "holberton.h"

/**
 * *_strchr - locates first occurrence of c in s
 * @s: scanned string
 * @c: searched char
 * Return: pointer to result
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
		if (*s == c)
		{
			break;
		}
	}
	return (s);
}
