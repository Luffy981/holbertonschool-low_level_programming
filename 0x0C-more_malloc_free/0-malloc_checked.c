#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * if malloc fails, the malloc_checked function should cause normal process
 * termination with a status value of 98
 *
 * @b: Parameter
 * Return: Return value
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
		return (0);
	}
	return (p);
}
