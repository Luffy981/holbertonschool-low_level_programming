#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Function to create 2D array reserving space in  the memory
 * @width: Parameter
 * @height: Parameter
 * Return: Return value
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	p = malloc(sizeof(*p) * height);
	if (width <= 0 || height <= 0 || p == NULL)
	{
		free(p);
		return (NULL);
	}
	i = 0;
	for (i = 0 ; i < height ; i++)
	{
		p[i] = malloc(sizeof(**p) * width);
	}
	for (i = 0 ; i < height ; i++)
	{
		if (p[i] == NULL)
		{
			free(p[i]);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
