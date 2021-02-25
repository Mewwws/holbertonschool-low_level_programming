#include "holberton.h"

/**
* manual - actually does all the job
* @n: search square root of this
* @i: variable square attempt
* Return: root or -1
*/
int manual(int n, int i)
{
	if (i * i < n)
		return (manual(n, i + 1));
	if (i * i == n)
		return (i);
	return (-1);
}

/**
 * _sqrt_recursion - square root with recursion?
 * @n: search square root of this
 * Return: manual's
 */
int _sqrt_recursion(int n)
{
	return (manual(n, 0));
}
