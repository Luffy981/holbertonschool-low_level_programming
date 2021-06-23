#include "holberton.h"
/**
 * _islower - Function to return 1 if C is a lower and 0 if C is upper
 * Return: Return value "n"
 */
int _abs(int r)
{
	if (r > '0')
	{
		return(r);
	} else if (r < '0')
	{
		return (-r);
	}
	return (0);
}
