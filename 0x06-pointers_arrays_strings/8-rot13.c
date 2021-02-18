#include "holberton.h"

/**
 * *rot13 - encodes rot13
 * @s: encoded string
 * Return: s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char k[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; k[j] != '\0'; j++)
		{
			if (s[i] == k[j])
			{
				s[i] = l[j];
				break;
			}
		}
	}
	return (s);
}
