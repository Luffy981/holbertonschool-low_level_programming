#include "holberton.h"
/**
 * find_prime - Find prime
 * @x: number
 * @y: Iterator
 * Return: 0 or 1
 */
int find_prime(int x, int y)
{
	if (x < 2)
		return (0);
	if (y * y > x)
		return (1);


	if (x % y == 0)
		return (0);

	else
		return (find_prime(x, y + 1));
}

/**
 * is_prime_number - Find prime
 * @n: number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (find_prime(n, 2));
}
