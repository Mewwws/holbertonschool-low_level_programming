#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - alloc with malloc and chec if it worc
 * @b: size
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
