#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Function to print data dog
 * @d: Parameter pointer
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("(nil)");
	if (d->owner == NULL)
		printf("(nil)");
	if (d == NULL)
		return;
	printf("%s\n", d->name);
	printf("%6f\n", d->age);
	printf("%s\n", d->owner);
}
