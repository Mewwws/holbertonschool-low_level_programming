#include "holberton.h"

/**
* _abs - compute absolute value of int
* @a: computed int
* Return: result
*/
int _abs(int a)
{
	if (a < 0)
	{
		a = -a;
	}
	return (a);
}
