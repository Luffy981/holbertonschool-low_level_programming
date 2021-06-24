#include "holberton.h"
/**
 * print_numbers - Function to return 1 if  upper alphabet
 * Return: Return value "n"
 */
void print_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
