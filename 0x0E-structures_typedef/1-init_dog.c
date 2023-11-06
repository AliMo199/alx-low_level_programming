#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable of type dog
 * @d: pointer to struct dog initialization
 * @name: name initialization
 * @age: age initialization
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
