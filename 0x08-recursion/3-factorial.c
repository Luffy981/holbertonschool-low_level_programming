#include "holberton.h"
/**
 * factorial - Factorial of n
 * @n: Parameter
 * Return: Return value
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n < 0)
	{
		return (-1);
	}
	return (1);
}
