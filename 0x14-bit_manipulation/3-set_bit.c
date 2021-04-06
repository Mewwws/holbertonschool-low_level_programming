#include "holberton.h"

/**
 * set_bit - sets a specific bit from a number to 1
 * @n: number to set bit in
 * @index: index of the n to set
 * Return: bit value (1 or 0)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	n = n | (1 << index);
	return (n);
}
