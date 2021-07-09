#include "holberton.h"
/**
 * sqrt_func - Function to returns the natural square root of a number.
 * @x: Parameter
 * @c: Parameter
 * Return: Return value
 */
int sqrt_func(int x, int c)
{
	if (x * x == c)
		return (x);
	if (x * x > c)
		return (-1);
	return (sqrt_func(x + 1, c));
}
/**
 * _sqrt_recursion - Function
 * @n: Parameter
 * Return: Return value
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_func(1, n));
}
