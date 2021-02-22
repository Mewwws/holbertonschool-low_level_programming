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

	while (*haystack != '\0')
	{
		haystack++;
		if (*haystack == needle[0])
		{
			for (i = 0; needle[i] != '\0'; i++)
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
			if (needle[i + 1] == '\0')
			{
				break;
			}
		}
	}
	if (haystack[i] == needle[i])
	{
		return (haystack);
	}
	else
	{
		return (0);
	}
}
