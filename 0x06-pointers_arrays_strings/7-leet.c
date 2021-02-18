#include "holberton.h"

/**
 * *leet - converts normal being typing to 1337
 * @s: translated string pointer
 * Return: pointer
 */
char *leet(char *s)
{
	char k[] = "aAeEoOtTlL";
	char l[] = "4433007711";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; k[j] != '\0'; j++)
		{
			if (s[i] == k[j])
			{
				s[i] = l[j];
			}
		}
	}
	return (s);
}
