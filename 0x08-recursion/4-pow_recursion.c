#include "holberton.h"
/**
 * _pow_recursion - Function to pow with recursion
 * @x: Parameter
 * @y: Parameter
 * Return: Return value
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y < 0)
	{
		return (-1);
	}
	return (1);
}
