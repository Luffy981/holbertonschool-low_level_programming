#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - Function to print lower alphabet
 * Return: Return value "n"
 */
void print_to_98(int n)
{
	while(n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while(n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if(n == 98)
	{
		printf("%d\n", n);
	}

}
