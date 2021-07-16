#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - Function to obtain string length
 * @ac: Parameter
 * @av: Parameter
 * Return: Return value
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
			size++;
		size++;
	}
	size++;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			str[j++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
