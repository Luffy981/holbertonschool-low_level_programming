#include "holberton.h"
 /**
 * print_alphabet - Function to print lower alphabet
 * Return: Return value "n"
 */
void times_table(void)
{
	int a=0;
	int b=0;
	int r;
	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			r = a *(b);
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (r >= 10)
			{
				_putchar((r/10) + '0');
				_putchar((r%10) + '0');
			} else if (r < 10)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
}
