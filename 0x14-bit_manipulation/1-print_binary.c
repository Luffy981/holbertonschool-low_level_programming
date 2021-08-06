#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that converts a number to binary
 * @n:  Number to convert to binary
 *
 * Return: Return count
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
