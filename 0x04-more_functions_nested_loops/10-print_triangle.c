#include "holberton.h"
/**
 * print_diagonal - Function to print \ in diagonal
 * @n: Parameter
 * Return: Return value "n"
 */
void print_triangle(int size)
{
	int n;
	int i;
	int j;
	int k;
	n=size;
	if(n>=1)
	{
		for(i=n ; i >0 ; i--)
		{
			for(j=0; j<(i-1); j++)
			{
				_putchar(' ');
			}
			for(k=0 ; k <=n-i  ; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if(n<1)
	{
		_putchar('\n');
	}
}
