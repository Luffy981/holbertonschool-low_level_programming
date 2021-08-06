#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:  Binary string
 *
 * Return: Return count
 */
unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	int n = 0;

	if(b == NULL)
		return (0);
	if (*b - '0' < 2 && *(b + 1) == '\0')
		return (*b - '0');
	while (b[a])
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
		a++;
	}
	a = a - 1;
	while (*b)
	{
		n += (*b - '0') << a;
		a--;
		b++;
	}
	return (n);
}
