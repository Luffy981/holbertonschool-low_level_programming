#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:  Binary string
 *
 * Return: Return count
 */
unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	int n = 0;

	if (b == NULL)
		return (0);
	if (*b - '0' < 2 && *(b + 1) == '\0')
		return (*b & 1);
	while (b[a])
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
		a++;
	}
	a = a - 1;
	while (*b)
	{
		n += (*b & 1) << a;
		a--;
		b++;
	}
	return (n);
}
/**
 * print_bin - function that converts a number to binary
 * @n:  Number to convert to binary
 * @index: Index
 * Return: Return n
 */

int print_bin(unsigned long int n, unsigned int index)
{
	char buffer[30];
	char *buff = &(buffer[29]);

	buffer[29] = '\0';
	buff--;
	while (n  > 0)
	{
		if (index != 0)
		{
			*buff = (n & 1) + '0';
		} else
		{
			*buff = (n & 0) + '0';
		}
		n = (n >> 1);
		buff--;
		index--;
	}
	buff++;
	n = binary_to_uint(buff);
	return (n);
}
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n:  Number
 * @index: index
 * Return: Return count
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r;

	if (index >= 704)
		return (-1);
	r = 1 << index;
	*n = *n | r;
	*n = print_bin(*n, index);
	return (1);
}
