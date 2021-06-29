#include "holberton.h"
/**
 * _puts - Function to print a complete string
 * @str: Parameter
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
