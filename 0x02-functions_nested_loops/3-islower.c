#include "holberton.h"

/**
* _islower - checks for lowercase
* @c: checked character
* Return: 1 if lower, 0 if else
*/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
