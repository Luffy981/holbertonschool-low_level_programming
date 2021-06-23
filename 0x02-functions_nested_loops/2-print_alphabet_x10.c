#include "holberton.h"
/**
 * main - Function main
 * Return: Return value "n"
 */
int main(void)
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
	return (0);
}
