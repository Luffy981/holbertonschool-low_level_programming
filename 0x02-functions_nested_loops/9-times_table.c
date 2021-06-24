#include "holberton.h"
/**
 * times_table - Function to print table
 * Return: Return value "n"
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int r;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			r = a * (b);
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (r >= 10)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			} else if (r < 10 && b != 0)
			{
				_putchar(' ');
				_putchar(r + '0');
			} else
			{
				_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
}
