#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	const char *a = b;
	int c = 0;
	int m;
	unsigned int f = 1;
	unsigned int n = 0;
	while(*a)
	{
		if (*a != '0' || *a != '1')
		{
			return (0);
		}
		a++;
		c++;
	}
	if (b == NULL)
		return (0);
	m = c;
	while(c > 0)
	{
		f *= 10;
		c--;
	}
	while (c > 0)
	{
		n += (*b * 10);
		f /= 10;
		m--;
	}
	return (n);
}
