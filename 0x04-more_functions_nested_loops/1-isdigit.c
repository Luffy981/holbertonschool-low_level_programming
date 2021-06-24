#include "holberton.h"
/**
 * _isdigit - Function to print lower alphabet
 * @c: Parameter
 *
 * Return: Return value "n"
 */
int _isdigit(int c)
{
	if (c > 47 && c <= 57)
	{
		return (1);
	}
	return (0);
}
