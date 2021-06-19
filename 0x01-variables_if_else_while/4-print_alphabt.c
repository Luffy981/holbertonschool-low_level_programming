#include <stdio.h>
/**
 * main - Function main
 * Return: Return value "n"
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z'; i++)
	{
		if (i != "e;q")
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
