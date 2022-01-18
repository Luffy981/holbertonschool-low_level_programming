#include "search_algos.h"
/**
 * jump_search = Function to jump
 * @array: array
 * @size: lenght array
 * @value: value
 *
 * Return: return
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t left = 0;
	size_t right = 0;

	if (!array)
		return (-1);
	while (right < size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);

	for (; left < size && left <= right ; left++)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}
	return (-1);
}
