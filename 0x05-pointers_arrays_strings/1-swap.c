#include "holberton.h"
/**
 * swap_int - Trade values a-b
 * @a: Parameter
 * @b: Parameter
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
