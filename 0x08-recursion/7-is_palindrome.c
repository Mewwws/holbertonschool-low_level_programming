#include "holberton.h"

/**
* is_palindrome - checks if palindrome
* Return: 1 if yes, 0 if no
*/
int is_palindrome(char *s)
{
	int i = 0;
	int j;

	if (s[0] == '\0')
	{
		return (1);
	}
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	for (j = 0; j < i; j++)
	{
		if (j > i /2)
		{
			return (1);
		}
		if (s[j] != s[i - j])
		{
			break;
		}
	}
	return (0);
}
