#include "holberton.h"
/**
 * _isupper - Function to return 1 if  upper alphabet
 * Return: Return value "n"
 */
int _isupper(int c)
{
	if (c == 65 && c <= 90)
	{
		return (1);
	}
	if (c == 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
