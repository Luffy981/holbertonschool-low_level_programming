#include <stdio.h>
/**
 * main - Function main
 * Return: Return value "n"
 */
int main(void)
{
	int i;
	int j;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			if ( i < j && i !=j )
			{
				putchar(i);
				putchar(j);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
