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
			i = 0;
			while (needle[i] != '\0' && haystack[i] != '\0' && haystack[i] == needle[i] )
			{
				i++;
			}
			if (needle[i] == '\0')
			{
				return (haystack);
			}
		}
	}
	return (0);
}
