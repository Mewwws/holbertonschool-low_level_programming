#ifndef _DOGE
#define _DOGE
/**
 * struct dog - doge id
 * @name: doge name
 * @age: doge float
 * @owner: doge owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog  dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
