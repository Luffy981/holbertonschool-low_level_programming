#include <stdio.h>
/**
 * main - Function main
 * Return: Return value "n"
 */
int main(void)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
		putchar("%c ", i);


	for (i = 'a'; i <= 'z'; i++)
		putchar("%c ", i);

	return (0);
}
