#include "holberton.h"

/**
 * *_strstr - searches for first occurrence of needle in haystack
 * @needle: searches that
 * @haystack: search it here
 * Return: pointer to result
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	while (*haystack != '\0')
	{
		haystack++;
		if (*haystack == needle[0])
		{
			for (i = 0; needle[i] != '\0' && haystack[i] != '\0'; i++)
			{
				if (haystack[i] == needle[i])
				{
					continue;
				}
				else
				{
					break;
				}
			}
			if (needle[i] == '\0')
			{
				j = 1;
				break;
			}
			if (haystack[i] != needle[i])
			{
			}
		}
	}
	if (j == 1)
	{
		return (haystack);
	}
	else
	{
		return (0);
	}
}
