#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Function to reserve memory and set with 0
 * @nmemb: Parameter
 * @size: Parameter
 * Return: Return value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(size) * nmemb);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0 ; i < nmemb ; i++)
	{
		*(p + i) = 0;
	}
	return (p);
}
