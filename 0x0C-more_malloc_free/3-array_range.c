#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Function to reserve memory and set from min to max (include)
 * @min: Parameter
 * @max: Parameter
 * Return: Return value
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < max - min + 1 ; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
