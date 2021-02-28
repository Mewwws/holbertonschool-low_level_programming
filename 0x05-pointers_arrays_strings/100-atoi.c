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
	int n = 0;

	if (*s == '\0')
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			for (i = 0; s[i] != '\0'; i++)
			{
				if (s[i] >= '0' && s[i] <= '9')
				{
					m = m * 10 + s[i] - '0';
					n = 1;
				}
				else
				{
					return (o * m);
					break;
				}
			}
		}
		if (n == 1)
			break;
		if (s[i] == '-')
			o = o * -1;
	}
	return (o * m);
}
