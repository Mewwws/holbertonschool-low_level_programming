#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - realloc with malloc and free
 * @ptr: pointer to allocated
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to new allocated / NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		free(ptr);
		a = malloc(new_size);
		return (a);
	}

	return (ptr);
}
