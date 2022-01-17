#include "search_algos.h"
/**
 * linear_search - linear_search
 * @array: array
 * @size: size of array
 * @value: value
 *
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i = 0;
	int flag = 0;

	if (array == NULL)
		return (-1);
	while (left < right)
	{
		i = left;
		flag = 0;
		printf("Searching in array: ");
		while (i <= right)
		{
			if (flag == 1)
				printf(", ");
			printf("%d", array[i]);
			flag = 1;
			i++;
		}
		printf("\n");
		mid = (right + left) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}

	printf("Searching in array: %d\n", array[mid + 1]);
	return (-1);
}
