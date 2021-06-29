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
	if (i % 2 == 0)
	{
		for (a = i / 2 ; a < i ; a++)
		{
			_putchar(str[a]);
		}
	} else
	{
		for (a = (i - 1) / 2 ; a < i ; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
