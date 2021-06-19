#include <stdio.h>
/**
 * main - Function main
 * Return: Return value "n"
 */
int main(void)
{
	char c;

	for (c = "A" ; c <= "Z" ; c++)
	{
		putchar("%c\n", c);
	}
	for (c = "a" ; c <= "z" ; c++)
	{
		putchar("%c\n", c);
	}
	return (0);
}
