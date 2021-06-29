#include "holberton.h"
/**
 * puts2 - Function to print a complete string in reverse
 * @str: Parameter
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
