#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: Array to ecaluate
 * @size: Size of array
 * @cmp: Pointer to function
 * Return: Return value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (0);
	for (i = 0 ; i < size ; i++)
	{
		if ((cmp)(array[i]) == 1)
			return (i);
	}
	return (0);
}
