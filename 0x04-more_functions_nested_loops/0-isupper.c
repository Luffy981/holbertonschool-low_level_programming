#include "holberton.h"
/**
 * _isupper - Function to return 1 if  upper alphabet
 *@c: Parameter
 *
 * Return: Return value "n"
 */
int _isupper(int c)
{
	if (c == 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
