#include “holberton.h”

/**
 * get_bit - gets a specific bit from a number
 * @n: number to take bit from
 * @index: index of the n to return 
 * Return: bit value (1 or 0)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = (n >> index) & 1;
	if (i != 0 && i != 1)
		return (-1);
	return (i);
}
