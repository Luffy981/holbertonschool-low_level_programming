#include "holberton.h"
/**
 * times_table - Function to print table
 * Return: Return value "n"
 */
void print_line(int n)
{
	int i;
	if (n>=1)
	{
		for(i=0;i<n;i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
