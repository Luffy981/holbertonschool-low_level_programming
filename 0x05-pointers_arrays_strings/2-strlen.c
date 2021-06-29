#include "holberton.h"
/**
 * _strlen - Function to print leng string
 * @s: Parameter
 * Return: Return value "n"
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
