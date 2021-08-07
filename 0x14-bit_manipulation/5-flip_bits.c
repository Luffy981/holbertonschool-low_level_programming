#include "main.h"
/**
 * flip_bits - function returns the number of bits you would need to flip
 * @n:  number to convert
 * @m: number
 * Return: Return count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int a = 0;

	count = n ^ m;
	while (count >= 1)
	{
		a += (count & 1);
		count = count >> 1;
	}
	return (a);
}
