#include "holberton.h"

/**
 * is_palindrome - checks if palindrome
 * @s: checked string
 * Return: 1 if yes, 0 if no
 */
int is_palindrome(char *s)
{
	return (manudrome(s, _strlen_recursion(s), 0));
}

/**
 * _strlen_recursion - counts lenght with recursion
 * @s: counted string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * manudrome - does all the job
 * @s: checked string
 * @i: checker pointer helper stronger
 * @j: helper checker stronger pointer
 * Return: 1 if palin, 0 if undrome
 */
int manudrome(char *s, int i, int j)
{
	if (j >= i)
		return (1);
	if (s[j] == s[i - 1])
		return (manudrome(s, i - 1, j + 1));
	return (0);
}
