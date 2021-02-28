#include "holberton.h"

/**
 * _strspn - counts number of common bytes
 * @s: is scanned
 * @accept: contains searched for chars
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (n > 0 && (s[i + 1] < 65 || s[i + 1] > 122))
		{
			break;
		}
	}
	return (n);
}
