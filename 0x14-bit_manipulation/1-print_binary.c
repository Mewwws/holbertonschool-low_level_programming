#include "holberton.h"
/**
 * print_binary - prints a number in binary
 * @n: printed number
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n);
	_putchar((n & 1) + '0');
}
