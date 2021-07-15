#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Function to concatenates two strings
 * @s1: Parameter
 * @s2: Parameter
 * @n: Parameter
 * Return: Return value
 */
unsigned int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = malloc(_strlen(s1) + n + 1);
	unsigned int i;

	if (p == NULL)
	{
		return (NULL);
	}
	if (n >= _strlen(s2))
	{
		n = _strlen(s2);
	}
	for (i = 0 ; i < _strlen(s1) + n ; i++)
	{
		if (i < _strlen(s1))
		{
			*(p + i) = *(s1 + i);
		} else
		{
			*(p + i) = *s2;
			s2++;
		}
	}
	return (p);
}
