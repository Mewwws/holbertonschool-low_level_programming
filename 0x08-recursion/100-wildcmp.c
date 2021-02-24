#include "holberton.h"

/**
* wildcmp - compares
* @s1: is compared
* @s2: is compared
* Return: 1 if corresponding, 0 if not
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 != '\0')
			return (wildcmp(s1 + 1, s2 + 1));
		else
			return (1);
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1, s2 + 1));
		
	}	
	return (0);
}
