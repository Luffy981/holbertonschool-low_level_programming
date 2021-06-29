#include "holberton.h"
/**
 * puts2 - Function to print a complete string in reverse
 * @str: Parameter
 */
void puts2(char *str)
{
	int i;
	int a;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}

	for (a = 0 ; a < i ; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
