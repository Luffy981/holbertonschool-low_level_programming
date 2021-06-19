#include <stdio.h>
/**
 * main - Function main
 * Return: Return value "n"
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		if (i > 'z')
		{
			putchar(i = '\n');
		}
	}
		return (0);
}
