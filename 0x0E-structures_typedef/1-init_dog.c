#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Init struct dog
 * @d: First member
 * @name: Second member
 * @age: Third member
 * @owner: Four member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
