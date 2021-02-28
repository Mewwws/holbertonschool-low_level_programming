#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: converted string
 * Return: inted string
 */
int _atoi(char *s)
{
	int i;
	int m = 0;
	int o = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ('0' <= s[i] && s[i] <= '9')
		{
			m = m * 10 + s[i] - '0';
		}
		if (s[i] == '-')
			o == -1;
	}
	return (m * o);
}
