#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n:  Number to evaluate
 * @index: Index
 * Return: Return count
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int count;

	if (index == 0)
	{
		return ((n & 1));
	}
	if (n < 2 && index > 0)
		return (-1);
	if (n > 1 || index == 0)
	{
		count = get_bit(n >> 1, (index - 1));
	}
	return (count);
}
