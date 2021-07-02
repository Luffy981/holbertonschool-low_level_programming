#include "holberton.h"
/**
 *_strcmp - Function to compare two strings
 * @s1: Parameter
 * @s2: Parameter
 * Return: Return value
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int a;
	int r;

	i = 0;
	j = 0;
	a = 0;
	r = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i >= j)
	{
		while (s1[r] != '\0')
		{
			a = (s1[r] - s2[r]) + a;
			r++;
		}
	} else if (i < j)
	{
		while (s2[r] != '\0')
		{
			a = (s1[r] - s2[r]) + a;
			r++;
		}
	}
	return (a);

}
