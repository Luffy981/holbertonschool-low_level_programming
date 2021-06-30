#include "holberton.h"
/**
 * puts_half - Function to print a complete string in reverse
 * @str: Parameter
 */
void puts_half(char *str)
{
	int i;
	int a;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	a = i / 2;
	if (i % 2 != 0)
	{
		while (a < (i - 1))
		{
			a = a + 1;
			_putchar(str[a]);
		}
	} else
	{
		while (a < i)
		{
			_putchar(str[a]);
			a++;
		}
	}
	_putchar('\n');
}
