#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Function to create a new dog
 * @name: Parameter
 * @owner: Parameter
 * @age: Parameter
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	dog = malloc((sizeof(dog_t)));
	if(dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
