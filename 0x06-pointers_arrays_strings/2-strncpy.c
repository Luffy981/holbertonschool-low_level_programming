#include "holberton.h"
/**
 *_strncpy - Function to concatenates two strings
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 * Return: Return value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
