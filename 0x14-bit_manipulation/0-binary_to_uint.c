#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:  Binary string
 *
 * Return: Return count
 */
unsigned int binary_to_uint(const char *b)
{
	const char *a = b;
	int c = 0;
	int m;
	unsigned int f = 1;
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (*a)
	{
		if (*a != '0' && *a != '1')
		{
			return (0);
		}
		a++;
		c++;
	}
	m = c;
	while (c > 1)
	{
		f *= 2;
		c--;
	}
	while (m > 0)
	{
		n += ((*b - '0') * f);
		f /= 2;
		m--;
		b++;
	}
	return (n);
}
