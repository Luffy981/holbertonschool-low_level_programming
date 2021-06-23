#include "holberton.h"
/**
 * _islower - Function to return 1 if C is a lower and 0 if C is upper
 *@c: Parameter
 * Return: Return value "n"
 */
int _islower(int c)
{
	if ((c >= 65 && c <= 90))
	{
		return (0);
	}
	return (1);
}
