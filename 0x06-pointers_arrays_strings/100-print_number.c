#include "holberton.h"

/**
 * print_number - prints number using only _putchar
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	unsigned char p;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 10)
	{
		print_number(n / 10);
		p = n;
		_putchar(p + '0');
	}
	else
	{
		p = (n % 10);
		_putchar(p + '0');
	}
}
