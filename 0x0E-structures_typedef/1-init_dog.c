#include "dog.h"
/**
 * init_dog - inits a doge
 * @name: doge namae
 * @age: dogeage
 * @owner: dogeowner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
