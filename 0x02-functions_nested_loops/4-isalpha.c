#include "holberton.h"
/**
 * _isalpha - Function to return 1 if C is a lower or upper and 0 otherwise
 *@c: Parameter
 * Return: Return value "n"
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
