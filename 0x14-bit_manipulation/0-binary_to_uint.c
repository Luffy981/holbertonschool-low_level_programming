#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:  Binary string
 *
 * Return: Return count
 */
unsigned int binary_to_uint(const char *b)
{
	int c = 0;
	int m;
	int i = 0;
	unsigned int f = 1;
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (b[c] != '\0')
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}
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
		n += ((b[i] - '0') * f);
		f /= 2;
		m--;
		i++;
	}
	return (n);
}
