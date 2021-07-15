#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Function to concatenates two strings
 * @s1: Parameter
 * @s2: Parameter
 * @n: Parameter
 * Return: Return value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = malloc(strlen(s1) + n + 1);
	unsigned int i;

	if (p == NULL)
	{
		return (NULL);
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	for (i = 0 ; i < strlen(s1) + n ; i++)
	{
		if (i < strlen(s1))
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
