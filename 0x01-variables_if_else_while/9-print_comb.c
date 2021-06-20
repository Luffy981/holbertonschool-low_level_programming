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
		if ( i != '9')
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}else
		{
			putchar(i);
		}
	}
	return (0);
}
