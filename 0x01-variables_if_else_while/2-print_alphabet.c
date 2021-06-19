#include <stdio.h>
/**
 * main - Function main
 * Return: Return value "n"
 */
int main(void)
{
	char ch;

	for (ch = "A" ; ch <= "Z" ; ch++)
		putchar("%c\n", ch);
	for (ch = "a" ; ch <= "z" ; ch++)
		putchar("%c\n", ch);
	return (0);
}
