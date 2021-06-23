#include "holberton.h"
/**
 * print_last_digit - Function to return 1 if C is a lower and 0 if C is upper
 *@u: Parameter
 * Return: Return value "n"
 */
int print_last_digit(int u)
{
	return (u %= u);
}
