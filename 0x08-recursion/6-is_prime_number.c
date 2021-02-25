#include "holberton.h"

/**
* is_prime_number - checks for prime numbers
* @n: checked number
* Return: primanual
*/
int is_prime_number(int n)
{
	return (primanual(n, 2));
}
/**
 * primanual - does the actual job
 * @n: checked number
 * @i: checker
 * Return: 1 if prime, 0 if composed
 */
int primanual(int n, int i)
{
	if (n < 2)
		return (0);
	if (i * 2 > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (primanual(n, i + 1));
}
