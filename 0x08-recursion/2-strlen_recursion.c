#include "holberton.h"

/**
* _strlen_recursion - counts lenght with recursion
* @s: counted string
* Return: length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
