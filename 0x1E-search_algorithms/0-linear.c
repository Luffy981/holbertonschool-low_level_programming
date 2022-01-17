#include "search_algos.h"
/**
 * linear_search - linear_search
 * @array: array
 * @size: size of array
 * @value: value
 *
 * Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);
	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
