#include "holberton.h"
#include <stdio.h>

/**
 * main - returns largest prime factor of number
 * Return: result
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned int i = 0;

	while(i < n)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
		{
			i++;
		}
	}
	printf("%lu",n);
}
