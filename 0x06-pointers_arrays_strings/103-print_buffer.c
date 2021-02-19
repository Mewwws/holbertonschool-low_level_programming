#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - idk
 * @b: buffer?
 * @size: size of something
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i = 0;

	{
	unsigned int p;

	if (i < 0)
	{
		printf("%x", size);
		i = -i;
	}
	p = i;
	if ((p / 10) > 0)
	{
		printf("%x", size);
	}
	printf("%d", size);
}

}
