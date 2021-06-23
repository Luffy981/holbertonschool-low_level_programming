#include "holberton.h"
/**
 * _islower - Function to return 1 if C is a lower and 0 if C is upper
 *@c: Parameter
 * Return: Return value "n"
 */
int _islower(int c)
{
	if ((c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
