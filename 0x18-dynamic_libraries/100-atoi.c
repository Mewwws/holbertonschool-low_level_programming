#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: converted string
 * Return: inted string
 */
int _atoi(char *s)
{
	unsigned int i;
	unsigned int m = 0;
	unsigned int o = 1;
	unsigned int n = 0;

	if (*s == '\0')
		return (0);
	while (n == 0)
	{
		if (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
			n = 1;
		if (s[i] == '-')
		{
			o = o * -1;
			i++;
		}
		else
			i++;
	}
	while (n == 1 && s[i] >= '0' && s[i] <= '9' && '\0')
	{
		m = m * 10 + s[i] - '0';
		i++;
	}
	return (o * m);
}
