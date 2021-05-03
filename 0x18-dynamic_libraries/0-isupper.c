#include <stdio.h>

/**
 * _isupper - checks for uppercase
 * @c: checked variable
 * Return: 1 if upper; else 0
 */
int  _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
