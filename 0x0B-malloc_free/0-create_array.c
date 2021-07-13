#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Function to fills memory with a constant byte
 * @size: Parameter
 * @c: Parameter
 * Return: Return value
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(sizeof(char) * size);
	unsigned long int i;

	i = 0;
	while (i < 98)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
