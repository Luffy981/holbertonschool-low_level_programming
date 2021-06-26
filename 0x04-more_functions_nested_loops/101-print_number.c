#include "holberton.h"
/**
 * print_number - Function to print a integer number
 * @n: Parameter
 * Return: Return value "n"
 */
void print_number(int n)
{
	int a;
	int b;
	int c;
	int d;

	if (n < 0)
	{
		if (n > -10)
		{
			a = (n % 10) * (-1);
			_putchar('-');
			_putchar(a + '0');
		}
		if (n > -100)
		{
			a = (n / 10) * (-1);
			b = (n % 10) * (-1);
			_putchar('-');
			_putchar(a + '0');
			_putchar(b + '0');
		}
	} else if (n >= 0)
	{
		if (n < 10)
		{
			a = (n % 10);
			_putchar(a + '0');
		} else if (n < 100 && n > 10)
		{
			a = (n / 10);
			b = (n % 10);
			_putchar(a + '0');
			_putchar(b + '0');
		} else if (n < 1000 && n > 100)
		{
			a = (n / 100);
			b = (n / 10) % 10;
			c = (n % 10);
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(c + '0');
		} else if (n < 10000 && n > 1000)
		{
			a = (n / 1000);
			b = (n / 100) % 10;
			c = (n / 10) % 10;
			d = (n % 10);
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(c + '0');
			_putchar(d + '0');
		}
	}
}
