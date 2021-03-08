#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints doge
 * @d: doge pointer
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
