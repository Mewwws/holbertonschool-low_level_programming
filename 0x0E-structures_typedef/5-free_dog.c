#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees a dog
 * @d: dog pointer to free
 * Return: no dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
