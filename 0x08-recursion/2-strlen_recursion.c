#include "holberton.h"
/**
 * _strlen_recursion - Function to prints length of a string
 * @s: Parameter
 * Return: Return value
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
