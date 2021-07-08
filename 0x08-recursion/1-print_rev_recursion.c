#include "holberton.h"
/**
 * _print_rev_recursion - Function to print reverse string with recursion
 * @s: Parameter
 * Return: Return value
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1); /*Recursion with tail*/
	_putchar(*s);

}
