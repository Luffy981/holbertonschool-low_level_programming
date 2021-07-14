#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - Function to obtain string length
 * @s: Parameter
 * Return: Return value
 */
int _strlen(char *s)
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
 * str_concat - Function to reserve memory and concatenates two strings
 * @s1: Parameter
 * @s2: Parameter
 * Return: Return value
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int a;
	char *p = (char *)malloc(_strlen(s1) + _strlen(s2) + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	a = 0;
	while (i <= (_strlen(s1) + _strlen(s2)))
	{
		if (i < _strlen(s1))
		{
			*(p + i) = *(s1 + i);
		} else
		{
			*(p + i) = *(s2 + a);
			a++;
		}
		i++;
	}
	return (p);
}
