#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - Function to string length
 * @s: Parameter
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
/**
 * string_nconcat - Function to concatenates two strings
 * @s1: Parameter
 * @s2: Parameter
 * @n: Parameter
 * Return: Return value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0;
	unsigned int a = 0;

	if (n >= _strlen(s2))
	{
		n = _strlen(s2);
	}
	p = malloc(_strlen(s1) + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i <= (_strlen(s1) + n))
	{
		if (s1 != NULL && n != 0)
		{
			if (i < _strlen(s1))
			{
				*(p + i) = *(s1 + i);
			} else
			{
				*(p + i) = *(s2 + a);
				a++;
			}
		} else if (s1 == NULL && s2 != NULL)
		{
			*(p + i) = *(s2 + i);
		} else if (s2 == NULL && s1 != NULL)
		{
			*(p + i) = *(s1 + i);
		} else if (s1 == NULL && s2 == NULL)
		{
			*(p + i) = 0;
		}
		i++;
	}
	return (p);
}
