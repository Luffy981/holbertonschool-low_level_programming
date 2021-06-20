#include <stdio.h>
/**
 * main - Function main
 * Return: Return value "n"
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (i < 10)
		{
			putchar(i);
		}
	}
	return (0);
}
