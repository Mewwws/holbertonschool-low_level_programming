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
	if (d->name == NULL)
		printf("Name: Nul");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: NUL");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: NUL");
	else
		printf("Owner: %s", d->owner);
}
