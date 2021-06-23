#include "holberton.h"
/**
 * print_alphabet_x10 - Function to count alphabet
 * Return: Return value "n"
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = '0' ; j <= '9' ; j++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar ('\n');
	}
}
