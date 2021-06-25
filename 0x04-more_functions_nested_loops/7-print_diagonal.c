#include "holberton.h"
/**
 * times_table - Function to print table
 * Return: Return value "n"
 */
void print_diagonal(int n)
{
	int i;
	int j;
	if(n>=1)
	{
		for(i=0 ;i<n;i++)
		{
			for(j=1 ; j <= i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
