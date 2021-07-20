#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Function to print data dog
 * @d: Parameter pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)");
		return;
	}
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
