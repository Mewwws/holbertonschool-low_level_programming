#include "holberton.h"

/**
* _isalpha - checks for alphabet
* @c: checked char
* Return: 1 if letter, 0 if else
*/
int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	for (i = 'A'; i <= 'Z'; i++)
		if (c == i)
		{
			return (1);
		}
	return (0);
}
