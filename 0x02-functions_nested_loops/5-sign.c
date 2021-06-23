#include "holberton.h"
/**
 * print_sign - Function to return 1 if C is a lower and 0 if C is upper
 *@n: Parameter
 * Return: Return value "n"
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	} else if (n == 48)
	{
		_putchar(48);
		return (0);
	} else if (n < 48)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
