 #include "holberton.h"

/**
 * print_number - prints number using only _putchar
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int p;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	p = n;
	if ((p / 10) > 0)
	{
		print_number(p / 10);
	}
	_putchar((p % 10) + '0');
}
