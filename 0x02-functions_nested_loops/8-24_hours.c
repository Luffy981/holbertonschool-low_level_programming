#include "holberton.h"
/**
 * print_last_digit - Function to return 1 if C is a lower and 0 if C is upper
 *@u: Parameter
 *
 * Return: Return value "n"
 */
void jack_bauer(void)
{
	int a=0;
	int b=0;
	int c=0;
	int d=0;

	for (a = 0 ; a <= 2 ; a++)
	{
		for (b = 0 ; b <= 3 ; b ++)
		{
			for (c = 0 ; c <= 5 ; c++)
			{
				for (d = 0 ; d <= 9 ; d++)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
				}
			}
		}
	}
}
