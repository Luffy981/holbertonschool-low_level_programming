#include "holberton.h"
/**
 *_strncat - Function to concatenates two strings
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 * Return: Return value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;
	while (dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
 		i++;
	}
	return (dest);
}
