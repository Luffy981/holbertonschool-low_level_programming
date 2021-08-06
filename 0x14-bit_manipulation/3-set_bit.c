#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n:  Number to evaluate
 * @index: Index
 * Return: Returns: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r;

	if (index >= 704)
		return (-1);
	r = 1 << index;
	*n = *n | r;
	return (1);
}
